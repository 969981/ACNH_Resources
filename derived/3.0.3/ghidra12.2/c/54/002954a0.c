
void FUN_002954a0(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined1 auStack_34 [16];
  undefined4 local_24;
  
  puVar2 = PTR_DAT_04bcb8b8;
  lVar6 = *(long *)PTR_DAT_04bcb8b8;
  if (*(int *)(lVar6 + 0xd8) - 3U < 5) {
    *(undefined4 *)(lVar6 + 0x158) = 8;
  }
  else {
    local_24 = 0;
    local_44 = 0x8c77;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
    FUN_002296c4(auStack_34,&local_44);
    FUN_0029c318(lVar6,2,6,auStack_34);
    lVar6 = *(long *)puVar2;
  }
  FUN_00292340(*(undefined8 *)(lVar6 + 0xb8));
  lVar5 = *(long *)(param_1 + 0x120);
  lVar6 = *(long *)(DAT_04c5fbb0 + 0x30);
  plVar4 = (long *)FUN_00228380();
  uVar1 = 0;
  if (*plVar4 != 0) {
    uVar1 = (undefined4)((lVar6 - lVar5) / *plVar4);
  }
  bVar3 = 2 < *(int *)(param_1 + 0x90) - 6U;
  lVar6 = 0x300;
  if (bVar3) {
    lVar6 = 0x308;
  }
  lVar5 = 0x2fd;
  if (bVar3) {
    lVar5 = 0x305;
  }
  *(undefined4 *)(&DAT_04c5ff68 + lVar6) = uVar1;
  (&DAT_04c5ff68)[lVar5] = *(undefined1 *)(param_1 + 0x130);
  *(undefined4 *)(param_1 + 0x90) = 0;
  return;
}

