
void FUN_01fb1450(long *param_1,undefined4 *param_2)

{
  short sVar1;
  undefined8 *puVar2;
  ulong uVar3;
  short sVar4;
  long lVar5;
  
  lVar5 = DAT_05ab5ea8;
  if ((*(int *)(param_1[1] + 0x750) != 3) && (DAT_05ab5ea8 != 0)) {
    sVar1 = FUN_0376baa0(param_1[1] + 0x3e0);
    if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       (((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0 || (DAT_05ab7608 == 0)))) {
      sVar4 = *(short *)(lVar5 + 0x2c);
      if ((*(ushort *)(lVar5 + 0x28) & 0x80) != 0) {
        sVar4 = -1;
      }
    }
    else {
      lVar5 = *(long *)(DAT_05ab7608 + 0x10);
      if ((*(long **)(lVar5 + 0x11b0) == (long *)0x0) ||
         (puVar2 = (undefined8 *)**(long **)(lVar5 + 0x11b0), puVar2 == (undefined8 *)0x0)) {
        sVar4 = *(short *)(*(long *)(lVar5 + 0x1198) + *(long *)(lVar5 + 0x1190) + 2);
      }
      else {
        uVar3 = (**(code **)*puVar2)();
        sVar4 = *(short *)(*(long *)(lVar5 + 0x1198) + *(long *)(lVar5 + 0x1190) + 2);
        if ((((uVar3 & 1) != 0) && (*(long *)(lVar5 + 0x11b0) != 0)) &&
           (puVar2 = *(undefined8 **)(*(long *)(lVar5 + 0x11b0) + 8), puVar2 != (undefined8 *)0x0))
        {
          (**(code **)*puVar2)();
        }
      }
    }
    if ((sVar4 != -1) && (sVar4 == sVar1)) {
      *(undefined4 *)(param_1 + 0x2476) = *param_2;
                    /* WARNING: Could not recover jumptable at 0x01fb1574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x38))(param_1,0x54,0,0);
      return;
    }
  }
  return;
}

