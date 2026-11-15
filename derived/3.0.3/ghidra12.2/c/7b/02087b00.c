
void FUN_02087b00(long param_1,uint param_2)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  void *__dest;
  void *__src;
  long *plVar10;
  
  puVar1 = (undefined4 *)(param_1 + 0x10);
  puVar5 = puVar1 + (ulong)*(uint *)(param_1 + 0x294) * 0x20;
  if (4 < *(uint *)(param_1 + 0x294)) {
    puVar5 = puVar1;
  }
  puVar6 = puVar1 + (ulong)param_2 * 0x20;
  if (4 < param_2) {
    puVar6 = puVar1;
  }
  __dest = *(void **)(puVar6 + 8);
  *puVar6 = *puVar5;
  puVar6[1] = puVar5[1];
  puVar6[2] = puVar5[2];
  uVar7 = *(undefined8 *)(puVar5 + 3);
  puVar6[5] = puVar5[5];
  *(undefined8 *)(puVar6 + 3) = uVar7;
  plVar10 = (long *)(puVar5 + 6);
  (**(code **)(*plVar10 + 0x18))(plVar10);
  __src = *(void **)(puVar5 + 8);
  if (__dest != __src) {
    (**(code **)(*(long *)(puVar5 + 6) + 0x18))(plVar10);
    lVar8 = 0;
    do {
      if (*(char *)(*(long *)(puVar5 + 8) + lVar8) == '\0') goto LAB_02087bec;
      lVar2 = *(long *)(puVar5 + 8) + lVar8;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_02087bec;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_02087bec;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_02087bec:
    iVar4 = (int)lVar8;
    if ((int)puVar6[10] <= (int)lVar8) {
      iVar4 = puVar6[10] + -1;
    }
    memcpy(__dest,__src,(long)iVar4);
    *(undefined1 *)((long)__dest + (long)iVar4) = 0;
  }
  puVar6[0x1c] = puVar5[0x1c];
  puVar6[0x1d] = puVar5[0x1d];
  puVar6[0x1e] = puVar5[0x1e];
  *(undefined1 *)(puVar6 + 0x1f) = *(undefined1 *)(puVar5 + 0x1f);
  *(undefined1 *)((long)puVar6 + 0x7d) = *(undefined1 *)((long)puVar5 + 0x7d);
  *(undefined1 *)((long)puVar6 + 0x7e) = *(undefined1 *)((long)puVar5 + 0x7e);
  uVar9 = 1 << (ulong)(param_2 & 0x1f);
  uVar3 = (uint)*(byte *)(param_1 + 0x290) | uVar9 & 0xff;
  *(byte *)(param_1 + 0x290) = *(byte *)(param_1 + 0x290) | (byte)uVar9;
  uVar9 = 4;
  if ((uVar3 >> 4 & 1) == 0) {
    uVar9 = 3;
    if ((uVar3 >> 3 & 1) == 0) {
      uVar9 = 2;
      if ((uVar3 >> 2 & 1) == 0) {
        uVar9 = uVar3 >> 1 & 1;
      }
    }
  }
  *(uint *)(param_1 + 0x294) = uVar9;
  return;
}

