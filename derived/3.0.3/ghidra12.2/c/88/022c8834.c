
void FUN_022c8834(long param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = &DAT_0547b3e8;
  if (DAT_0547b3f0 == -1 && DAT_0547b3f4 == -1) {
    lVar3 = 0;
  }
  else {
    puVar2 = &DAT_0547b3f8;
    if ((DAT_0547b400 == -1) && (DAT_0547b404 == -1)) {
      lVar3 = 1;
    }
    else {
      puVar2 = &DAT_0547b408;
      if ((DAT_0547b410 == -1) && (DAT_0547b414 == -1)) {
        lVar3 = 2;
      }
      else {
        puVar2 = &DAT_0547b418;
        if ((DAT_0547b420 == -1) && (DAT_0547b424 == -1)) {
          lVar3 = 3;
        }
        else {
          puVar2 = &DAT_0547b428;
          if ((DAT_0547b430 == -1) && (DAT_0547b434 == -1)) {
            lVar3 = 4;
          }
          else {
            puVar2 = &DAT_0547b438;
            if ((DAT_0547b440 == -1) && (DAT_0547b444 == -1)) {
              lVar3 = 5;
            }
            else {
              puVar2 = &DAT_0547b448;
              if ((DAT_0547b450 == -1) && (DAT_0547b454 == -1)) {
                lVar3 = 6;
              }
              else {
                puVar2 = &DAT_0547b458;
                if ((DAT_0547b460 != -1) || (DAT_0547b464 != -1)) {
                  uVar1 = 1 << (ulong)(param_2 & 0x1f);
                  DAT_0547b4b8 = DAT_0547b4b8 | uVar1;
                  DAT_0547b4b4 = DAT_0547b4b4 & (uVar1 ^ 0xffffffff);
                  goto LAB_022c88d4;
                }
                lVar3 = 7;
              }
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)((long)puVar2 + 0xc) = *(undefined4 *)(param_3 + 0xc);
  DAT_0547b468 = DAT_0547b468 | (byte)(1 << lVar3);
LAB_022c88d4:
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}

