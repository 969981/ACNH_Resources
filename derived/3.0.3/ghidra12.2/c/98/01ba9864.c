
void FUN_01ba9864(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined *local_50;
  char *pcStack_48;
  
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "MsgHeap";
  local_50 = puVar1;
  DAT_0533a0c0 = (long *)FUN_038c6d48(DAT_0533a080,&local_50,param_1,8,1,0);
  pcStack_48 = "MsgHeapSys";
  local_50 = puVar1;
  DAT_0533a088 = FUN_038c6d48(0x40000,&local_50,DAT_0533a0c0,8,1,1);
  pcStack_48 = "MsgHeapInsert";
  local_50 = puVar1;
  DAT_0533a090 = FUN_038c6d48(0x20000,&local_50,DAT_0533a0c0,8,1,1);
  pcStack_48 = "MsgHeapStringWork";
  plVar7 = DAT_0533a0c0;
  local_50 = puVar1;
  if (DAT_0533a0c0 == (long *)0x0) {
    lVar6 = *(long *)PTR_DAT_04bb2698;
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar3 = (undefined8 *)(lVar6 + 8);
    if (lVar4 != 0) {
      puVar3 = (undefined8 *)(lVar4 + 0xa8);
    }
    plVar7 = (long *)*puVar3;
    if (plVar7 == (long *)0x0) {
      plVar5 = (long *)0x0;
      goto LAB_01ba99f0;
    }
  }
  plVar5 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x64000,8);
  if (plVar5 != (long *)0x0) {
    FUN_038ca450(plVar5,&local_50,plVar7,plVar5,0x64000,1,1);
    puVar1 = PTR_DAT_04bd0d80;
    *(undefined4 *)((long)plVar5 + 0xd4) = 0x1000;
    plVar5[0x1f] = 0;
    plVar5[0x1b] = 0;
    plVar5[0x1c] = 0;
    plVar5[0x1d] = 0;
    plVar5[0x1e] = 0;
    *plVar5 = (long)(puVar1 + 0x10);
    FUN_038ccc00(plVar5,8,0,plVar7);
  }
LAB_01ba99f0:
  puVar2 = puVar2 + 0x10;
  pcStack_48 = "MsgHeapArchive";
  DAT_0533a098 = plVar5;
  local_50 = puVar2;
  DAT_0533a0a0 = FUN_038c6d48(0x200000,&local_50,DAT_0533a0c0,8,1,1);
  pcStack_48 = "MsgHeapTextRes";
  local_50 = puVar2;
  DAT_0533a0a8 = FUN_038c6d48(&LAB_01b80000,&local_50,DAT_0533a0c0,8,1,1);
  pcStack_48 = "MsgHeapVoiceRes";
  local_50 = puVar2;
  DAT_0533a0b0 = FUN_038c6d48(0x100000,&local_50,DAT_0533a0c0,8,1,1);
  pcStack_48 = "MsgHeapNgc";
  local_50 = puVar2;
  DAT_0533a0b8 = FUN_038c6d48(0x30000,&local_50,DAT_0533a0c0,8,1,1);
  return;
}

