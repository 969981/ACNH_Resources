
void FUN_015dcfdc(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar4 = malloc(0x1b0);
  }
  else {
    plVar3 = param_2;
    if (param_2 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar5 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        puVar4 = (undefined8 *)0x0;
        goto LAB_015dd05c;
      }
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x1b0,8);
  }
LAB_015dd05c:
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined2 *)((long)puVar4 + 0x3a) = 0;
  puVar4[6] = 0;
  *(undefined1 *)(puVar4 + 7) = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar1 = PTR_DAT_04bb2cc8 + 0x10;
  puVar4[0xf] = 0;
  *(undefined2 *)((long)puVar4 + 0x72) = 0;
  *(undefined1 *)(puVar4 + 0xe) = 0;
  puVar4[0x28] = 0;
  *(undefined4 *)(puVar4 + 0x29) = 0;
  *(undefined4 *)(puVar4 + 0x2c) = 0;
  puVar4[2] = puVar1;
  puVar4[3] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[8] = 0;
  puVar4[9] = puVar1;
  puVar4[0x2a] = 0;
  puVar4[0x2b] = 0;
  FUN_038e18e4(puVar4 + 0x2d);
  puVar4[0x35] = 0;
  *(undefined8 **)(param_1 + 0x950) = puVar4;
  FUN_015df7e4(puVar4,*(undefined8 *)(param_1 + 0x10),param_2,*(undefined4 *)(param_1 + 0x3bc),
               *(undefined4 *)(param_1 + 0x3c0));
  return;
}

