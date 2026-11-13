
void FUN_0144b3ec(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *local_50;
  char *pcStack_48;
  
  puVar2 = PTR_DAT_04bb2020;
  lVar4 = *(long *)(*(long *)(param_1 + 0x2f0) + 0x1138);
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "TempoRate";
  if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x78), lVar4 != 0)) &&
     (plVar3 = *(long **)(lVar4 + 0x48), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x30))(0x3f800000,plVar3,&local_50);
  }
  puVar5 = *(undefined8 **)(param_1 + 0x448);
  if (puVar5 != &DAT_0407ebb1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x450) < 1) {
      iVar1 = *(int *)(param_1 + 0x450) + -1;
    }
    memset(puVar5,0,(long)iVar1);
    *(undefined1 *)((long)puVar5 + (long)iVar1) = 0;
  }
  local_50 = puVar2 + 0x10;
  pcStack_48 = "SoundAnimName";
  lVar4 = *(long *)(*(long *)(param_1 + 0x2f0) + 0x1138);
  if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x78), lVar4 != 0)) &&
     (plVar3 = *(long **)(lVar4 + 0x48), plVar3 != (long *)0x0)) {
    (**(code **)(*(long *)(param_1 + 0x440) + 0x18))(param_1 + 0x440);
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_50,*(undefined8 *)(param_1 + 0x448));
  }
  puVar5 = *(undefined8 **)(param_1 + 0x4a0);
  if (puVar5 != &DAT_0407ebb1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x4a8) < 1) {
      iVar1 = *(int *)(param_1 + 0x4a8) + -1;
    }
    memset(puVar5,0,(long)iVar1);
    *(undefined1 *)((long)puVar5 + (long)iVar1) = 0;
  }
  return;
}

