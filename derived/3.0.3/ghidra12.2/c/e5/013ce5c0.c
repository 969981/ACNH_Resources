
void FUN_013ce5c0(long *param_1)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  plVar4 = *(long **)PTR_DAT_04bb27d0;
  if ((plVar4 == (long *)0x0) || (lVar5 = *plVar4, *(byte *)(lVar5 + 0x476) < 2)) {
LAB_013ce61c:
    FUN_013ce970(param_1);
  }
  else {
    bVar3 = *(byte *)(lVar5 + 0x473);
    if ((long)(char)bVar3 == 0xffffffffffffffff) goto LAB_013ce61c;
    uVar6 = (long)(char)bVar3 & 0xffffffff;
    pbVar1 = (byte *)(lVar5 + 0x48) + uVar6 * 0x80;
    if (7 < bVar3) {
      pbVar1 = (byte *)(lVar5 + 0x48);
    }
    if ((*pbVar1 >> 3 & 1) == 0) goto LAB_013ce61c;
    lVar5 = plVar4[2] + 0x108 + uVar6 * 0xc;
    if (0xb < bVar3) {
      lVar5 = plVar4[2] + 0x108;
    }
    cVar2 = *(char *)(lVar5 + 10);
    FUN_013ce970(param_1);
    if (cVar2 == '\0') {
      lVar5 = 0;
      goto LAB_013ce6b0;
    }
  }
  if ((*(byte *)((long)param_1 + 0x5a9) & 1) != 0) {
    FUN_013cea90(param_1);
    *(byte *)((long)param_1 + 0x5a9) = *(byte *)((long)param_1 + 0x5a9) & 0xfe;
  }
  lVar5 = 1;
LAB_013ce6b0:
  (**(code **)(*param_1 + 0xf8))(param_1);
  if (*(int *)((long)param_1 + 0x5a4) < 1) {
    (**(code **)(*param_1 + 0x108))(param_1,lVar5);
    (**(code **)(*param_1 + 0x108))(param_1,lVar5);
    (**(code **)(*param_1 + 0x108))(param_1,lVar5);
    (**(code **)(*param_1 + 0x108))(param_1,lVar5);
    (**(code **)(*param_1 + 0x108))(param_1,lVar5);
    (**(code **)(*param_1 + 0x108))(param_1,lVar5);
    (**(code **)(*param_1 + 0x108))(param_1,lVar5);
    (**(code **)(*param_1 + 0x108))(param_1,lVar5);
    (**(code **)(*param_1 + 0x108))(param_1,lVar5);
    (**(code **)(*param_1 + 0x108))(param_1,lVar5);
    (**(code **)(*param_1 + 0x108))(param_1,lVar5);
    (**(code **)(*param_1 + 0x108))(param_1,lVar5);
    (**(code **)(*param_1 + 0x108))(param_1,lVar5);
    (**(code **)(*param_1 + 0x108))(param_1,lVar5);
    (**(code **)(*param_1 + 0x108))(param_1,lVar5);
    (**(code **)(*param_1 + 0x108))(param_1,lVar5);
    (**(code **)(*param_1 + 0x108))(param_1,lVar5);
    (**(code **)(*param_1 + 0x108))(param_1,lVar5);
    (**(code **)(*param_1 + 0x108))(param_1,lVar5);
    (**(code **)(*param_1 + 0x108))(param_1,lVar5);
    if ((*(byte *)((long)param_1 + 0x5a9) >> 3 & 1) == 0) {
      *(int *)((long)param_1 + 0x5a4) = (int)param_1[0xb4];
    }
  }
  (**(code **)(*param_1 + 0x110))(param_1,lVar5);
  if (lVar5 == 0) {
    FUN_013cea90(param_1);
    *(byte *)((long)param_1 + 0x5a9) = *(byte *)((long)param_1 + 0x5a9) | 1;
  }
  else {
    (**(code **)(*param_1 + 0x1c0))(param_1);
  }
  *(int *)((long)param_1 + 0x5a4) = *(int *)((long)param_1 + 0x5a4) + -1;
                    /* WARNING: Could not recover jumptable at 0x013ce940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x100))(param_1);
  return;
}

