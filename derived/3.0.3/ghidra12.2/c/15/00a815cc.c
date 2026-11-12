
undefined8 * FUN_00a815cc(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_04da6480 != (undefined8 *)0x0) {
    return DAT_04da6480;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x40c0);
  }
  else {
    plVar2 = param_1;
    if (param_1 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar4 + 8);
      if (lVar1 != 0) {
        plVar2 = (long *)(lVar1 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        puVar3 = (undefined8 *)0x0;
        goto LAB_00a81658;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x40c0,8);
  }
LAB_00a81658:
  FUN_038c69f0(puVar3 + 0x814,param_1,3);
  puVar3[6] = 0;
  DAT_04da6478 = puVar3 + 0x814;
  puVar3[0x814] = &PTR_FUN_0492eb68;
  *puVar3 = &PTR_LAB_0492eb88;
  *(undefined4 *)((long)puVar3 + 0x4062) = 0x101;
  *(undefined4 *)((long)puVar3 + 0x406a) = 0x101;
  *(undefined4 *)((long)puVar3 + 0x4072) = 0x101;
  *(undefined1 *)(puVar3 + 0x811) = 0;
  *(undefined4 *)((long)puVar3 + 0x408c) = 0x101;
  *(undefined4 *)(puVar3 + 7) = 0;
  *(undefined2 *)(puVar3 + 0x80c) = 0;
  *(undefined1 *)((long)puVar3 + 0x4066) = 0;
  *(undefined2 *)(puVar3 + 0x80d) = 0;
  *(undefined1 *)((long)puVar3 + 0x406e) = 0;
  *(undefined2 *)(puVar3 + 0x80e) = 0;
  *(undefined1 *)((long)puVar3 + 0x4076) = 0;
  puVar3[0x80f] = 0;
  puVar3[0x810] = 0;
  *(undefined2 *)((long)puVar3 + 0x408a) = 0x7dc;
  *(undefined1 *)(puVar3 + 0x812) = 0;
  *(undefined4 *)((long)puVar3 + 0x4094) = 1;
  *(undefined1 *)(puVar3 + 0x813) = 0;
  DAT_04da6480 = puVar3;
  puVar3[4] = 0;
  puVar3[5] = 0;
  return puVar3;
}

