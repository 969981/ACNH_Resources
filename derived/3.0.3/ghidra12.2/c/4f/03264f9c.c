
void FUN_03264f9c(long param_1)

{
  undefined2 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined4 local_34;
  
  puVar3 = PTR_DAT_04bb43c0;
  puVar2 = PTR_DAT_04bb37e0;
  puVar1 = (undefined2 *)PTR_DAT_04bb37e0;
  if (*(long *)PTR_DAT_04bb5ce0 != 0) {
    puVar1 = (undefined2 *)(*(long *)PTR_DAT_04bb5ce0 + 0xe70);
  }
  local_38 = *puVar1;
  local_36 = *(undefined1 *)(puVar1 + 1);
  local_35 = *(undefined1 *)((long)puVar1 + 3);
  local_34 = *(undefined4 *)(puVar1 + 2);
  piVar6 = (int *)**(undefined8 **)(param_1 + 8);
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_38);
  if (*(long *)puVar3 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if (((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) && (*piVar6 < piVar6[1]))
    {
      puVar5 = *(undefined8 **)(piVar6 + 4);
      if (puVar5 != (undefined8 *)0x0) {
        *(undefined8 *)(piVar6 + 4) = *puVar5;
      }
      *(undefined4 *)puVar5 = 0;
      *(undefined4 *)((long)puVar5 + 4) = *(undefined4 *)puVar2;
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar2 + 4);
      *(undefined4 *)((long)puVar5 + 0xc) = 0xffffffff;
      if (*piVar6 < piVar6[1]) {
        *(undefined8 **)(*(long *)(piVar6 + 2) + (long)*piVar6 * 8) = puVar5;
        *piVar6 = *piVar6 + 1;
      }
      *(undefined4 *)puVar5 = 5;
      *(undefined2 *)((long)puVar5 + 4) = local_38;
      *(undefined1 *)((long)puVar5 + 6) = local_36;
      *(undefined1 *)((long)puVar5 + 7) = local_35;
      *(undefined4 *)(puVar5 + 1) = local_34;
    }
  }
  return;
}

