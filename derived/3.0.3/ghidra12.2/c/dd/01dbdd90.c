
undefined8 FUN_01dbdd90(long *param_1,byte *param_2,undefined8 *param_3)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  byte local_34 [4];
  undefined4 local_30 [4];
  
  if ((*param_1 == 0) || (param_1[2] == 0)) {
    uVar3 = 0;
    if (param_3 == (undefined8 *)0x0) {
      return 0;
    }
    param_3[1] = 0x32ffffffff;
  }
  else {
    local_34[0] = *param_2;
    if (local_34[0] < 8) {
      FUN_007b36c8(local_30,local_34);
    }
    if (*(int *)(*param_1 + 0x508) != 0) {
      lVar4 = param_1[2];
      plVar1 = (long *)(lVar4 + 0x3f0);
      if (param_3 != (undefined8 *)0x0) {
        *plVar1 = (long)param_3;
        *param_3 = plVar1;
        lVar5 = *plVar1;
        *(undefined8 *)(lVar5 + 8) = 0;
        *(undefined8 *)(lVar5 + 0x10) = 0;
      }
      if (*(int *)(lVar4 + 0x380) == 0) {
        lVar5 = *plVar1;
        if (lVar5 != 0) {
          *(undefined8 *)(lVar5 + 8) = 1;
          *(undefined8 *)(lVar5 + 0x10) = 0;
          if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
            *(undefined8 *)*plVar1 = 0;
            *plVar1 = 0;
          }
        }
      }
      else if (3 < *(int *)(lVar4 + 0x380)) {
        *(undefined1 *)(lVar4 + 0xab0) = 0;
        uVar2 = DAT_0536c720;
        if (*(uint *)(*(long *)PTR_DAT_04bb36f0 + 0x20) <= DAT_0536c720) {
          uVar2 = 0;
        }
        *(undefined1 *)
         (*(long *)(*(long *)PTR_DAT_04bb36f0 + 0x28) + (long)(int)uVar2 * 0x38 + 0x30) = 1;
      }
      *(undefined4 *)(lVar4 + 0x3e0) = 0;
      *(undefined1 *)(lVar4 + 0xab4) = 1;
      return 1;
    }
    uVar3 = 1;
    if (param_3 == (undefined8 *)0x0) {
      return 1;
    }
    param_3[1] = 1;
  }
  param_3[2] = 0;
  return uVar3;
}

