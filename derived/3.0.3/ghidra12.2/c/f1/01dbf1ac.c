
void FUN_01dbf1ac(long param_1,byte *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  int local_30 [4];
  byte local_4 [4];
  
  if (*param_2 < 8) {
    local_4[0] = *param_2;
    FUN_007b36c8(local_30,local_4);
  }
  lVar5 = *(long *)(param_1 + 0x10);
  if ((((lVar5 != 0) && (*(int *)(lVar5 + 0x3e4) != 2)) && (*(char *)(lVar5 + 0xab2) != '\0')) &&
     (*(int *)(lVar5 + 0x380) == 0x1e)) {
    *(undefined8 *)(lVar5 + 0x3c8) = 0;
    *(undefined4 *)(lVar5 + 0x3d8) = 0;
    local_30[0] = 0x1f;
    FUN_03ebb160(lVar5 + 0x378,0x1f);
    if (local_30[0] == *(int *)(lVar5 + 0x3e0)) {
      lVar1 = *(long *)(lVar5 + 0x3f0);
      if (*(int *)(lVar5 + 1000) == 0) {
        if (lVar1 == 0) {
          return;
        }
        uVar2 = 0;
        uVar3 = 0;
        uVar4 = 1;
      }
      else {
        if (lVar1 == 0) {
          return;
        }
        uVar2 = *(undefined4 *)(lVar5 + 1000);
        uVar4 = 0xffffffff;
        uVar3 = *(undefined4 *)(lVar5 + 0x3ec);
      }
      *(undefined4 *)(lVar1 + 8) = uVar4;
      *(undefined4 *)(lVar1 + 0xc) = uVar2;
      *(undefined4 *)(lVar1 + 0x10) = uVar3;
      *(undefined4 *)(lVar1 + 0x14) = 0;
      if (*(undefined8 **)(lVar5 + 0x3f0) != (undefined8 *)0x0) {
        **(undefined8 **)(lVar5 + 0x3f0) = 0;
        *(undefined8 *)(lVar5 + 0x3f0) = 0;
      }
    }
  }
  return;
}

