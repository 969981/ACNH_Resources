
void FUN_001a007c(undefined4 param_1)

{
  undefined *puVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  
  puVar1 = PTR_DAT_04bcc088;
  (**(code **)(*(long *)PTR_DAT_04bcc088 + 0x10))(PTR_DAT_04bcc088);
  if (DAT_04c58c68 == '\0') {
    uVar5 = 0;
  }
  else {
    puVar2 = (uint *)FUN_03876070(DAT_04c58c60);
    uVar5 = *puVar2;
  }
  (**(code **)(*(long *)puVar1 + 0x10))(puVar1);
  if (uVar5 != 0) {
    if (((ulong)(DAT_04c58c40[1] - *DAT_04c58c40 >> 3) <= (ulong)uVar5) ||
       (*(long *)(*DAT_04c58c40 + (ulong)uVar5 * 8) == 0)) {
      (**(code **)(*(long *)puVar1 + 0x20))(puVar1);
      goto LAB_001a01e4;
    }
  }
  (**(code **)(*(long *)puVar1 + 0x20))(puVar1);
  plVar4 = &DAT_04c58bc8;
  if (DAT_04c58c68 != '\0') {
    puVar2 = (uint *)FUN_03876070(DAT_04c58c60);
    uVar5 = *puVar2;
    if (uVar5 != 0) {
      if ((ulong)(DAT_04c58c40[1] - *DAT_04c58c40 >> 3) <= (ulong)uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar4 = (long *)(*(long *)(*DAT_04c58c40 + (ulong)uVar5 * 8) + 0x20);
    }
  }
  if ((((*plVar4 != 0) && (lVar3 = *(long *)(*plVar4 + 0x10), lVar3 != 0)) &&
      (lVar3 = *(long *)(lVar3 + 0x10), lVar3 != 0)) &&
     (*(long *)(*(long *)(lVar3 + 0x18) + 0x60) == *(long *)(*(long *)(lVar3 + 0x18) + 0x58))) {
    FUN_0019c050();
    (**(code **)(*(long *)puVar1 + 0x20))(puVar1);
    FUN_0019f300(lVar3,param_1,0);
    FUN_0019c210();
    return;
  }
LAB_001a01e4:
                    /* WARNING: Could not recover jumptable at 0x001a01fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)puVar1 + 0x20))(puVar1);
  return;
}

