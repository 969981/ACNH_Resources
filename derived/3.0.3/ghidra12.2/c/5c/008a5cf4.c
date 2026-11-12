
undefined2 * FUN_008a5cf4(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined2 *puVar4;
  long lVar5;
  
  if (DAT_04ceb910 != (undefined2 *)0x0) {
    return DAT_04ceb910;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar4 = malloc(0xd8);
  }
  else {
    plVar3 = param_1;
    if (param_1 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar5 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        puVar4 = (undefined2 *)0x0;
        goto LAB_008a5d7c;
      }
    }
    puVar4 = (undefined2 *)(**(code **)(*plVar3 + 0x30))(plVar3,0xd8,8);
  }
LAB_008a5d7c:
  FUN_038c69f0(puVar4 + 0x5c,param_1,3);
  *(undefined4 *)(puVar4 + 4) = 0;
  DAT_04ceb908 = puVar4 + 0x5c;
  *(undefined ***)(puVar4 + 0x5c) = &PTR_FUN_049206e8;
  *(undefined4 *)(puVar4 + 2) = 0xfffe;
  *(undefined1 *)(puVar4 + 1) = 0xff;
  FUN_0277d4ac();
  *puVar4 = 0;
  *(undefined4 *)(puVar4 + 6) = 0xffffffff;
  puVar4[0x41] = 0;
  *(undefined4 *)(puVar4 + 0x10) = 0x30;
  puVar4[0x12] = 0;
  *(undefined1 *)(puVar4 + 0x44) = 0;
  *(undefined8 *)(puVar4 + 0x46) = 0;
  *(undefined8 *)(puVar4 + 0x4a) = 0;
  *(undefined8 *)(puVar4 + 0x4e) = 0;
  *(undefined ***)(puVar4 + 8) = &PTR_LAB_04920708;
  *(undefined2 **)(puVar4 + 0xc) = puVar4 + 0x12;
  uVar1 = DAT_04c9a0c8;
  *(undefined8 *)(puVar4 + 0x52) = 0;
  *(undefined1 *)(puVar4 + 0x5a) = 0;
  DAT_04ceb910 = puVar4;
  *(undefined4 *)(puVar4 + 0x56) = uVar1;
  *(undefined4 *)(puVar4 + 0x58) = uVar1;
  return puVar4;
}

