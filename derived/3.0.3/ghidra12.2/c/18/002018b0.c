
void FUN_002018b0(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_38;
  
  cVar3 = *(char *)(param_1 + 0x69);
  *(undefined1 *)(param_2 + 8) = 0;
  if (cVar3 == '\0') {
    lVar5 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar5 + 0x18) == *(long *)(param_1 + 0x18)) {
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_2 + 8) = 0;
      cVar4 = *(char *)(param_1 + 8);
    }
    else {
      *(undefined1 *)(param_2 + 8) =
           *(undefined1 *)
            (*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28) + *(long *)(param_1 + 0x18));
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
      cVar4 = *(char *)(param_1 + 8);
    }
    if (cVar4 != '\0') {
      return;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 0x18);
    if ((ulong)(*(long *)(lVar5 + 0x18) - lVar1) < 4) goto LAB_00201a74;
    lVar7 = lVar1 + 4;
    uVar6 = (ulong)*(uint *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28) + lVar1);
    *(long *)(param_1 + 0x18) = lVar7;
    lVar5 = *(long *)(param_1 + 0x10);
    if (3 < (ulong)(*(long *)(lVar5 + 0x18) - lVar7)) goto LAB_00201930;
LAB_002019c0:
    *(undefined1 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_2 + 0xc) = 0;
    cVar4 = *(char *)(param_1 + 8);
  }
  else {
    if (*(char *)(param_1 + 8) != '\0') {
      return;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar7 = *(long *)(param_1 + 0x18);
    uVar6 = 0;
    if ((ulong)(*(long *)(lVar5 + 0x18) - lVar7) < 4) goto LAB_002019c0;
LAB_00201930:
    uVar2 = *(undefined4 *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28) + lVar7);
    *(long *)(param_1 + 0x18) = lVar7 + 4;
    *(undefined4 *)(param_2 + 0xc) = uVar2;
    cVar4 = *(char *)(param_1 + 8);
  }
  if (cVar4 == '\0') {
    lVar5 = *(long *)(param_1 + 0x10);
    if ((ulong)(*(long *)(lVar5 + 0x18) - *(long *)(param_1 + 0x18)) < 8) {
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined1 *)(param_1 + 8) = 1;
      return;
    }
    *(undefined8 *)(param_2 + 0x10) =
         *(undefined8 *)
          (*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 0x28) + *(long *)(param_1 + 0x18));
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 8;
    (**(code **)(*DAT_04c5eb80 + 0x18))(DAT_04c5eb80,param_1,&local_38);
    if (*(long **)(param_2 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(param_2 + 0x20) + 8))();
    }
    cVar4 = *(char *)(param_1 + 8);
    *(undefined8 *)(param_2 + 0x20) = local_38;
    if (cVar4 == '\0' && cVar3 == '\0') {
      uVar6 = lVar7 + uVar6;
      if ((*(ulong *)(param_1 + 0x18) <= uVar6) &&
         (uVar6 <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x18))) {
        *(ulong *)(param_1 + 0x18) = uVar6;
        return;
      }
LAB_00201a74:
      *(undefined1 *)(param_1 + 8) = 1;
      return;
    }
  }
  return;
}

