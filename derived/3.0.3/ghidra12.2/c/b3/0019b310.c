
void FUN_0019b310(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04bcc088;
  (**(code **)(*(long *)PTR_DAT_04bcc088 + 0x10))(PTR_DAT_04bcc088);
  lVar2 = *(long *)puVar1;
  *(undefined8 *)(param_1 + 0x10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0019b350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x20))(puVar1);
  return;
}

