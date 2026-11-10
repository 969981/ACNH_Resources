
void FUN_0019c5fc(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_04bcc088;
  *param_1 = (long)(PTR_DAT_04bcc140 + 0x10);
  (**(code **)(*(long *)puVar2 + 0x10))(puVar2);
  if ((char)param_1[3] == '\0') {
LAB_0019c664:
                    /* WARNING: Could not recover jumptable at 0x0019c678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)puVar2 + 0x20))(puVar2);
    return;
  }
  uVar1 = *(uint *)((long)param_1 + 0xc);
  if (*(uint *)(param_1 + 1) == 0) {
    if (uVar1 < 0x11) {
      *(undefined8 *)(PTR_DAT_04bcb900 + (ulong)uVar1 * 8 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x0019c6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)puVar2 + 0x20))(puVar2);
      return;
    }
  }
  else if (uVar1 < 0x11) {
    *(undefined8 *)
     (*(long *)(**(long **)(PTR_DAT_04bcb900 + 0xa0) + (ulong)*(uint *)(param_1 + 1) * 8) +
      (ulong)uVar1 * 8 + 8) = 0;
    goto LAB_0019c664;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0018786c("C:/home/ws/Master/Pack/7923402a/OnlineCore/src/Core/InstantiationContext.cpp",0x55,
               0xe0000003,0);
}

