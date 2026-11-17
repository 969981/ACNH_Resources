
void FUN_02cda8e0(undefined2 *param_1,byte *param_2,uint param_3)

{
  undefined2 *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  byte local_24 [4];
  
  puVar2 = PTR_DAT_04bb37e0;
  *param_1 = *(undefined2 *)PTR_DAT_04bb37e0;
  *(undefined *)(param_1 + 1) = puVar2[2];
  *(undefined *)((long)param_1 + 3) = puVar2[3];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar2 + 4);
  if (((param_3 < 8) && (local_24[0] = *param_2, local_24[0] < 8)) &&
     (lVar4 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_24,1), lVar4 != 0)) {
    lVar4 = lVar4 + (ulong)param_3 * 0x2450;
    if ((*(long **)(lVar4 + 0x6340) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x6340), puVar5 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 ^ 1;
    }
    puVar1 = (undefined2 *)(*(long *)(lVar4 + 0x6328) + *(long *)(lVar4 + 0x6320));
    *param_1 = *puVar1;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(puVar1 + 1);
    *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar1 + 3);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar1 + 2);
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x6340) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x6340) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
  }
  return;
}

