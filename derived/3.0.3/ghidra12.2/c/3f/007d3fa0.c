
long * FUN_007d3fa0(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    plVar2 = malloc(400);
  }
  else {
    plVar2 = *(long **)(param_1 + 0x30);
    if (plVar2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar4 + 8);
      if (lVar3 != 0) {
        plVar2 = (long *)(lVar3 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)0x0;
        goto LAB_007d4018;
      }
    }
    plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,400,8);
  }
LAB_007d4018:
  FUN_03f433b0(plVar2,param_1,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),
               *(undefined4 *)(param_1 + 0x1c),*(undefined8 *)(param_1 + 0x20),
               *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  puVar1 = PTR_DAT_04bb4b30;
  *(undefined1 *)(plVar2 + 0x31) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined4 *)((long)plVar2 + 0x18c) = 0xffffffff;
  return plVar2;
}

