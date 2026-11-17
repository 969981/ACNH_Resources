
void FUN_02b49090(long param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  uint uVar8;
  long local_60;
  char local_58;
  char local_57;
  char local_56;
  
  lVar1 = param_1 + 0x18;
  lVar5 = param_1 + 0xc;
  lVar3 = lVar1 + ((ulong)~*(uint *)(param_1 + 0x10) & 1) * 0x58;
  *(undefined4 *)(lVar3 + 0x4c) = 0;
  FUN_02b48700(lVar3,lVar5,1,1,1);
  uVar8 = *(uint *)(param_1 + 0x10) & 1;
  lVar3 = lVar1 + (ulong)uVar8 * 0x58;
  piVar7 = (int *)(lVar3 + 0x48);
  if (*piVar7 != 0) {
    cVar2 = *(char *)(param_1 + 0x1b2);
    FUN_0071c8d0(&local_60,piVar7,lVar5,0);
    if (local_60 != 0) {
      if ((local_57 == '\0') || ((cVar2 != '\0' && ((local_58 == '\0' || (local_56 == '\0'))))))
      goto LAB_02b49170;
      FUN_006fb3d0();
    }
    FUN_02b48700(lVar3,lVar5,0,1,1);
  }
  *piVar7 = 0;
  lVar5 = lVar1 + (ulong)uVar8 * 0x58;
  *(undefined8 *)(lVar3 + 0x10) = 0xffffffff00000000;
  *(undefined4 *)(lVar5 + 0x4c) = 0;
  *(undefined2 *)(lVar5 + 0x50) = 0;
LAB_02b49170:
  plVar6 = (long *)(param_1 + 0xf0);
  uVar8 = *(int *)(param_1 + 0x10) + 1;
  *(uint *)(param_1 + 0x10) = uVar8;
  uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6);
  if ((uVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02b491bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*plVar6)(plVar6,lVar1 + (ulong)(uVar8 & 1) * 0x58);
  return;
}

