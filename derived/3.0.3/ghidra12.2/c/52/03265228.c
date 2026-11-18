
void FUN_03265228(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined2 *puVar6;
  int *piVar7;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined4 local_34;
  
  puVar2 = PTR_DAT_04bb43c0;
  puVar1 = PTR_DAT_04bb37e0;
  lVar5 = *(long *)PTR_DAT_04bb5ce0;
  puVar6 = (undefined2 *)PTR_DAT_04bb37e0;
  if (lVar5 != 0) {
    if (*(char *)(lVar5 + 0xe9e) != '\0') {
      puVar6 = (undefined2 *)(lVar5 + 0xe94);
    }
  }
  local_38 = *puVar6;
  local_36 = *(undefined1 *)(puVar6 + 1);
  local_35 = *(undefined1 *)((long)puVar6 + 3);
  local_34 = *(undefined4 *)(puVar6 + 2);
  piVar7 = (int *)**(undefined8 **)(param_1 + 8);
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_38);
  if (*(long *)puVar2 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if (((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) && (*piVar7 < piVar7[1]))
    {
      puVar4 = *(undefined8 **)(piVar7 + 4);
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)(piVar7 + 4) = *puVar4;
      }
      *(undefined4 *)puVar4 = 0;
      *(undefined4 *)((long)puVar4 + 4) = *(undefined4 *)puVar1;
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar1 + 4);
      *(undefined4 *)((long)puVar4 + 0xc) = 0xffffffff;
      if (*piVar7 < piVar7[1]) {
        *(undefined8 **)(*(long *)(piVar7 + 2) + (long)*piVar7 * 8) = puVar4;
        *piVar7 = *piVar7 + 1;
      }
      *(undefined4 *)puVar4 = 6;
      *(undefined2 *)((long)puVar4 + 4) = local_38;
      *(undefined1 *)((long)puVar4 + 6) = local_36;
      *(undefined1 *)((long)puVar4 + 7) = local_35;
      *(undefined4 *)(puVar4 + 1) = local_34;
    }
  }
  return;
}

