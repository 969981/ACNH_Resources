
undefined8 FUN_0014b5f8(int param_1,byte *param_2,undefined4 *param_3)

{
  bool bVar1;
  void *pvVar2;
  undefined8 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 local_64;
  
  if (param_1 == 2) {
    uVar5 = (uint)*param_2;
    if (*param_2 != 0) {
      uVar8 = 0;
      local_64 = 0;
      iVar6 = 0;
      bVar1 = false;
      puVar7 = &local_64;
      do {
        param_2 = param_2 + 1;
        pvVar2 = memchr("0123456789",uVar5,0xb);
        if (pvVar2 == (void *)0x0) {
          if (uVar5 != 0x2e) {
            return 0;
          }
          if (!bVar1) {
            return 0;
          }
          if (iVar6 == 4) {
            return 0;
          }
          uVar8 = 0;
          bVar1 = false;
          puVar7 = (undefined4 *)((long)puVar7 + 1);
          *(undefined1 *)puVar7 = 0;
        }
        else {
          if (uVar8 == 0 && bVar1) {
            return 0;
          }
          uVar5 = (int)pvVar2 + -0x4101757 + uVar8 * 10;
          if (0xff < uVar5) {
            return 0;
          }
          uVar8 = uVar5 & 0xff;
          *(char *)puVar7 = (char)uVar5;
          if (!bVar1) {
            if (3 < iVar6) goto LAB_0014b6dc;
            iVar6 = iVar6 + 1;
          }
          bVar1 = true;
        }
        uVar5 = (uint)*param_2;
      } while (uVar5 != 0);
      if (3 < iVar6) {
        *param_3 = local_64;
        return 1;
      }
    }
LAB_0014b6dc:
    uVar3 = 0;
  }
  else {
    piVar4 = __errno_location();
    *piVar4 = 0x61;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

