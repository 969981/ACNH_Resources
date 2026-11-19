
void FUN_03856670(undefined4 *param_1,uint param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  undefined2 local_24;
  undefined1 local_22;
  
  param_1[2] = 0;
  *param_1 = 2;
  uVar4 = (ulong)param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  FUN_038e18e4(param_1 + 6);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_038e3114(param_1 + 0x18,0,0x7fff);
  param_1[0x2a] = 0;
  FUN_038e3114(param_1 + 0x2c,0,0x7fff);
  param_1[0x3e] = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  param_1[0x42] = 0;
  if (0 < (int)param_2) {
    lVar5 = *(long *)PTR_DAT_04bb2698;
    if (lVar5 == 0) {
      pvVar3 = malloc(uVar4 << 4);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar1 = (undefined8 *)(lVar5 + 8);
        if (lVar2 != 0) {
          puVar1 = (undefined8 *)(lVar2 + 0xa8);
        }
        param_3 = (long *)*puVar1;
        if (param_3 == (long *)0x0) goto LAB_03856764;
      }
      pvVar3 = (void *)(**(code **)(*param_3 + 0x30))(param_3,uVar4 << 4,8);
    }
    if (pvVar3 != (void *)0x0) {
      param_1[2] = param_2;
      *(void **)(param_1 + 4) = pvVar3;
      goto LAB_03856770;
    }
  }
LAB_03856764:
  uVar4 = (ulong)(uint)param_1[2];
  if ((int)param_1[2] < 1) {
    return;
  }
LAB_03856770:
  lVar5 = 0;
  do {
    uVar4 = uVar4 - 1;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 4) + lVar5);
    lVar5 = lVar5 + 0x10;
    *(undefined2 *)((long)puVar1 + 9) = local_24;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    *(undefined4 *)((long)puVar1 + 0xc) = 0xabababab;
    *(undefined1 *)((long)puVar1 + 0xb) = local_22;
  } while (uVar4 != 0);
  return;
}

