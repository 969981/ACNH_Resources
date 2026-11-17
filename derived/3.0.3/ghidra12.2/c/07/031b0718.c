
void FUN_031b0718(undefined4 *param_1,byte *param_2)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte bVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04bb6538;
  if (param_2 != (byte *)0x0) {
    lVar6 = *(long *)PTR_DAT_04bb6538;
    if ((lVar6 == 0) ||
       (((*(long *)(lVar6 + 0x210) != 0 &&
         ((plVar2 = *(long **)(**(long **)(*(long *)(lVar6 + 0x210) + 0x3f8) + 0x1b0),
          plVar2 == (long *)0x0 || (uVar3 = (**(code **)(*plVar2 + 0x58))(), (uVar3 & 1) == 0)))) ||
        (1 < *(uint *)(lVar6 + 0x1b0))))) {
      *param_1 = 1;
      bVar5 = *param_2;
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      *(byte *)(param_1 + 2) = bVar5;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 0x20);
      uVar4 = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)((long)param_1 + 0x36) = *(undefined8 *)(param_2 + 0x2e);
      *(undefined8 *)(param_1 + 0xc) = uVar4;
      param_1[0x10] = *(undefined4 *)(param_2 + 0x38);
    }
    else {
      FUN_02dfa190(*(undefined8 *)puVar1,param_2);
      plVar2 = *(long **)puVar1;
      if ((int)plVar2[0x15] - 3U < 5) {
LAB_031b0798:
                    /* WARNING: Could not recover jumptable at 0x031b07b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0xa8))(plVar2);
        return;
      }
      if (((int)plVar2[0x15] == 5) || ((int)plVar2[0x15] == 2)) {
        FUN_0386b170(plVar2[0x13],plVar2);
        *(undefined1 *)((long)plVar2 + 0x165) = 1;
      }
      else if ((*(uint *)(plVar2 + 0x15) < 7) &&
              ((1 << (ulong)(*(uint *)(plVar2 + 0x15) & 0x1f) & 0x58U) != 0)) goto LAB_031b0798;
    }
  }
  return;
}

