
void FUN_0032c4a0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_04bceeb8;
  puVar1 = PTR_DAT_04bceea8;
  uVar3 = *(ulong *)(PTR_DAT_04bceeb8 + 8);
  if (0 < (int)uVar3) {
    lVar4 = 0;
    do {
      (**(code **)(**(long **)puVar1 + 0x18))
                (*(long **)puVar1,*(undefined8 *)(*(long *)puVar2 + lVar4));
      *(undefined8 *)(*(long *)puVar2 + lVar4) = 0;
      lVar4 = lVar4 + 8;
    } while ((uVar3 & 0xffffffff) * 8 != lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0032c52c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,*(undefined8 *)puVar2);
  return;
}

