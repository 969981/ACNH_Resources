
void FUN_02c0c3f4(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  (**(code **)(*param_1 + 0x1e0))(param_1,param_1 + 0x35);
  uVar2 = (**(code **)(*param_1 + 0x1d0))(param_1);
  lVar1 = DAT_05ae7600;
  if ((uVar2 & 1) != 0) {
    if (DAT_05ae7600 == 0) {
      puVar4 = malloc(0x48);
    }
    else {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar4 = (undefined8 *)(lVar1 + 8);
      if (lVar3 != 0) {
        puVar4 = (undefined8 *)(lVar3 + 0xa8);
      }
      puVar4 = (undefined8 *)(**(code **)(*(long *)*puVar4 + 0x30))((long *)*puVar4,0x48,8);
    }
    FUN_03410df4(puVar4,param_1 + 0x10);
    *(undefined4 *)(puVar4 + 8) = 0;
    *puVar4 = &PTR_FUN_04b29e58;
    param_1[0x41] = (long)puVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x02c0c4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}

