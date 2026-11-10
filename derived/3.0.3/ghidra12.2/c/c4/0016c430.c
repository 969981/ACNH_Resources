
void FUN_0016c430(long param_1)

{
  void *__s;
  long lVar1;
  byte bVar2;
  uint uVar3;
  
  bVar2 = *(byte *)(param_1 + 0x1ac);
  __s = (void *)(param_1 + 0x1a0);
  lVar1 = param_1 + 0x890;
  switch(bVar2) {
  case 0:
    break;
  case 1:
    FUN_001675f4(__s,lVar1);
    break;
  case 2:
    FUN_00167640(__s);
    break;
  case 3:
    FUN_00167664(__s);
    break;
  case 4:
    FUN_00167690(__s,lVar1);
    FUN_001689f8(lVar1,*(undefined8 *)(param_1 + 0x200));
    *(undefined8 *)(param_1 + 0x200) = 0;
    *(undefined8 *)(param_1 + 0x260) = 0;
    *(undefined8 *)(param_1 + 0x268) = 0;
    break;
  case 5:
    FUN_001676a0(__s,lVar1);
    break;
  case 6:
    FUN_001676e4(__s);
    break;
  case 7:
    FUN_00167710(__s,lVar1);
    break;
  case 8:
    FUN_00167748(__s);
    break;
  default:
    uVar3 = (uint)bVar2;
    if ((*(byte *)(param_1 + (ulong)(bVar2 >> 3) + 0x9ad) >> (ulong)(uVar3 & 7) & 1) == 0) {
      if (uVar3 == 0xc) {
        if ((*(byte *)(param_1 + 0x9a4) >> 1 & 1) != 0) {
          FUN_001677a8(__s,lVar1);
        }
      }
      else if ((uVar3 == 10) && ((*(byte *)(param_1 + 0x9a4) & 1) != 0)) {
        FUN_0016778c(__s,lVar1);
      }
    }
    else {
      FUN_00167788(__s);
    }
  }
  memset(__s,0,0x60);
  *(undefined4 *)(param_1 + 0x280) = 2;
  FUN_0016b2ac(param_1 + 0x208,param_1 + 0x284,9);
  *(long *)(param_1 + 0x228) = *(long *)(param_1 + 0x228) + 9;
  FUN_0016b268(param_1 + 0x230,lVar1);
  FUN_0016b2ac(param_1 + 0x230,0,0);
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  return;
}

