
void FUN_026b90a0(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  uint local_38;
  uint local_34;
  
  uVar1 = FUN_021d7d60();
  puVar4 = PTR_DAT_04bb46b0;
  local_34 = 4;
  lVar2 = *(long *)PTR_DAT_04bb46b0;
  local_38 = uVar1;
  if (lVar2 == 0) goto LAB_026b91c8;
  plVar3 = *(long **)(lVar2 + 0x10);
  if ((*(byte *)(lVar2 + 0x453) & 1) == 0) {
    plVar3 = (long *)*plVar3;
LAB_026b9100:
    lVar2 = (**(code **)(*plVar3 + 0x38))();
    if ((lVar2 == 0) || (6 < local_34)) goto LAB_026b911c;
  }
  else {
    if ((plVar3 != (long *)0x0) && (plVar3 = (long *)plVar3[0x26], plVar3 != (long *)0x0))
    goto LAB_026b9100;
LAB_026b911c:
    lVar2 = *(long *)puVar4;
    local_34 = 5;
    if (lVar2 == 0) goto LAB_026b91c8;
    plVar3 = *(long **)(lVar2 + 0x10);
    if ((*(byte *)(lVar2 + 0x453) & 1) == 0) {
      plVar3 = (long *)*plVar3;
    }
    else if ((plVar3 == (long *)0x0) || (plVar3 = (long *)plVar3[0x26], plVar3 == (long *)0x0))
    goto LAB_026b91c8;
    lVar2 = (**(code **)(*plVar3 + 0x38))();
    if ((lVar2 == 0) || (6 < local_34)) goto LAB_026b91c8;
  }
  puVar4 = &DAT_053fe348 + (ulong)uVar1 * 0xba0;
  if (9 < uVar1) {
    puVar4 = &DAT_053fe348;
  }
  if ((puVar4[0xaf9] != '\0') && (*(long *)(puVar4 + 0xaa0) != 0)) {
    local_34 = *(uint *)(*(long *)(puVar4 + 0xaa0) + 4);
    if (((local_34 == 0x17) || (local_34 == 0x14)) &&
       ((*(char *)(param_1 + 0x1315b) != '\x12' && (*(char *)(param_1 + 0x1315b) != '\x01')))) {
      return;
    }
  }
LAB_026b91c8:
  local_34 = FUN_021b3420(&DAT_053fe348,&local_38,1);
  FUN_026b9204(param_1,&local_34,param_2 & 1);
  return;
}

