const char webpageCode[] = R"=====(
<!DOCTYPE html>
<html lang="pt-br">

  <head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>SCG</title>
       <style>
        @import url('https://fonts.googleapis.com/css2?family=Roboto:ital,wght@0,100;0,300;0,400;0,500;0,700;0,900;1,100;1,300;1,400;1,500;1,700;1,900&display=swap');
        *{
         margin: 0;
          padding: 0;
          font-family: 'Roboto', sans-serif;

        }

        #cabecalho {
          display: flex;
          justify-content: flex-start;
          align-items: center;
          padding-top: 20px;
          background-color: #4bb4f1;
          font-size: 0;
          color: white;
          font-weight: bold;

        }

        #cabecalho img {
          width: 150px;
          padding: 20px;
          box-sizing: border-box;

        }

        .top {
          display: flex;
          flex-direction: column;
          align-items: center;
          justify-content: center;
          width: 100%;
          height: 100px;
          background-color: #4bb4f1;
          box-sizing: border-box;
          font-size: 16px;
          text-align: center;
        }

        #conteudo-principal {
          display: flex;
          flex-wrap: wrap;
          justify-content: center;
          padding: 20px;
        }

        .box {
          display: flex;
          flex-direction: column;
          align-items: center;
          justify-content: center;
          text-align: center;
          width: 90%;
          max-width: 350px;
          height: 350px;
          background-color: #f2f2f2;
          border: 1px solid #ccc;
          margin-top: 20px;
          margin-left: 20px;
          margin-right: 20px;
          margin-bottom: 20px;
          padding: 20px;
          box-sizing: border-box;
          font-size: 16px;
        }

        .box:hover {
          transform: scale(1.05);
          transition: all 400ms;
        }

        .box img {
          margin-bottom: auto;
          margin-top: auto;
        }

        @media only screen and (min-width: 480px) {
            .box {
            width: 45%;
            max-width: none;
          }
        }

      @media only screen and (min-width: 768px) 
      {
         .box {
          width: 30%;
          max-width: none;
        }
      }

      footer {
        background-color: #4bb4f1;
        color: white;
        text-align: center;
        padding: 10px;
      }

    </style>

  </head>
  <body>
    <div id="cabecalho">
      <img src="./imgs/logo.png" alt="Logo" width="100px" />

      <div class="top">

        <h2>SCG</h2>
        <p>cabeçalho</p>

      </div>

    </div>b


    <div id="conteudo-principal">
      <div class="box">
        <img src="./imgs/tanque.png" alt="BETAINA" width="100" height="100" class="tanque1">
        <h2 class="tanqueVolume1">Volume Do Tanque</h2>
        <p>BETAINA</p>
      </div>

      <div class="box">
        <img src="./imgs/tanque.png" alt="BETAINA" width="100" height="100" class="tanque2">
        <h2 class="tanqueVolume2">Volume Do Tanque</h2>
        <p>LAURIL</p>
      </div>

      <div class="box">
        <img src="./imgs/tanque.png" alt="BETAINA" width="100" height="100" class="tanque3">
        <h2 class="tanqueVolume3">Volume Do Tanque</h2>
        <p>ACIDO SULFONICO</p>
      </div>

      <div class="box">
        <img src="./imgs/tanque.png" alt="BETAINA" width="100" height="100" class="tanque4">
        <h2 class="tanqueVolume4">Volume Do Tanque</h2>
        <p>HIPOCLORITO DE SODIO</p>
      </div>

      <div class="box">
        <img src="./imgs/tanque.png" alt="BETAINA" width="100" height="100" class="tanque5">
        <h2 class="tanqueVolume5">Volume Do Tanque</h2>
        <p>HIPOCLORITO DE SODIO</p>
      </div>

      <div class="box">
        <img src="./imgs/tanque.png" alt="BETAINA" width="100" height="100" class="tanque6">
        <h2 class="tanqueVolume6">Volume Do Tanque</h2>
        <p>SODA CAUSTICA</p>
      </div>

      <div class="box">
        <img src="./imgs/tanque.png" alt="BETAINA" width="100" height="100" class="tanque7">
        <h2 class="tanqueVolume7">Volume Do Tanque</h2>
        <p>SODA CAUSTICA</p>
      </div>

    </div>
    <footer>
      <p>Rodapé Teiu</p>
   </footer>

  </body>

  <script>
        setInterval(function() {
          // Faz uma requisição AJAX para atualizar a distância a cada 2 segundos
          var xhttp = new XMLHttpRequest();
          xhttp.onreadystatechange = function() {
            if (this.readyState == 4 && this.status == 200) {
              // Atualiza o valor da distância no elemento <div> com o ID "tanque1"
              document.getElementById("tanque1").innerHTML = this.responseText;
            }
          };
          xhttp.open("GET", "/distance", true);
          xhttp.send();
        }, 2000);
  </script>
</body>
</html>
)=====";