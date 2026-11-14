
/* WARNING: Removing unreachable block (ram,0x01cacc0c) */
/* WARNING: Removing unreachable block (ram,0x01cacc48) */

undefined8 * FUN_01cacb44(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_053589d8 != (undefined8 *)0x0) {
    return DAT_053589d8;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x200);
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
        goto LAB_01cacbd0;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x200,8);
  }
LAB_01cacbd0:
  FUN_038c69f0(puVar3 + 0x3c,param_1,3);
  puVar3[1] = 0;
  puVar3[0x3c] = &PTR_FUN_04a45478;
  DAT_053589d0 = puVar3 + 0x3c;
  *(undefined1 *)(puVar3 + 2) = 0;
  *(undefined1 *)((long)puVar3 + 0x11) = 0;
  *puVar3 = &PTR_FUN_04a45498;
  *(undefined4 *)(puVar3 + 0x32) = 0;
  FUN_038e18e4(puVar3 + 0x33);
  *(undefined1 *)(puVar3 + 0x3b) = 0;
  DAT_053589d8 = puVar3;
  return puVar3;
}

