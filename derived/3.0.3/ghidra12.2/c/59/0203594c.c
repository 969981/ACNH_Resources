
/* WARNING: Removing unreachable block (ram,0x020359b4) */

void FUN_0203594c(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined *local_40;
  char *pcStack_38;
  
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "GenerateSecondCustomer";
  iVar1 = FUN_02758850(&local_40);
  if (iVar1 == 0) {
    uVar5 = (ulong)DAT_0545a42d;
    if (((uVar5 < 0x23) && (DAT_0545a42e <= (byte)PTR_DAT_04bc27f0[uVar5])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar5 * 4) >> (ulong)(DAT_0545a42e & 0x1f) & 1) != 0)) {
      FUN_038d1270(param_1,"-----");
      if ((ulong)DAT_0545a42d < 0x23) {
        FUN_038d1270(param_1,"%s%02d",
                     *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)DAT_0545a42d * 8 + 0xb0),DAT_0545a42e
                    );
      }
    }
  }
  else {
    lVar4 = *(long *)PTR_DAT_04bb46b0;
    lVar6 = 0;
    if (lVar4 != 0) {
      local_40 = (undefined *)CONCAT44(local_40._4_4_,1);
      if (((*(byte *)(lVar4 + 0x50d) ^ 0xff) & 6) == 0) {
        lVar4 = (**(code **)(**(long **)(*(long *)(lVar4 + 0x10) + 0x188) + 0x38))();
      }
      else {
        lVar4 = 0;
      }
      lVar6 = 0;
      if (lVar4 != 0) {
        lVar6 = lVar4 + 0xa8;
      }
    }
    if ((*(long **)(lVar6 + 0x36540) == (long *)0x0) ||
       (puVar3 = (undefined8 *)**(long **)(lVar6 + 0x36540), puVar3 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar3)();
      uVar2 = uVar2 ^ 1;
    }
    if (*(short *)(*(long *)(lVar6 + 0x36528) + *(long *)(lVar6 + 0x36520) + 0x3f8) != -1) {
      FUN_0376b510(param_1);
    }
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar6 + 0x36540) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(lVar6 + 0x36540) + 8), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)();
    }
  }
  return;
}

