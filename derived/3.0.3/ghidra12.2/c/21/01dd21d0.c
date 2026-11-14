
undefined8 FUN_01dd21d0(long param_1,ulong *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  
  puVar3 = PTR_DAT_04bb2a58;
  uVar6 = *param_2;
  if (uVar6 == 0) {
    lVar9 = *(long *)(param_1 + 0xf0);
  }
  else {
    if (uVar6 != *(ulong *)(param_1 + 200)) {
      iVar8 = *(int *)(*(long *)(param_1 + 0xe0) + 0x20);
      if (iVar8 == 0) {
        return 0;
      }
      plVar11 = *(long **)(*(long *)(param_1 + 0xe0) + 0x28);
      lVar7 = (long)iVar8 * 8;
      while( true ) {
        lVar7 = lVar7 + -8;
        lVar9 = *plVar11;
        if (uVar6 == *(ulong *)(lVar9 + 0x20)) break;
        plVar11 = plVar11 + 1;
        if (*(ulong *)(lVar9 + 0x20) < uVar6 || lVar7 == 0) {
          return 0;
        }
      }
      goto LAB_01dd2224;
    }
    lVar9 = *(long *)(param_1 + 0xd8);
  }
  if (lVar9 == 0) {
    return 0;
  }
LAB_01dd2224:
  iVar8 = *(int *)(param_1 + 0x4c);
  if (iVar8 < 1) {
    return 0;
  }
  bVar5 = false;
  iVar10 = 0;
  puVar1 = PTR_DAT_04bb2a58 + 0x10;
  do {
    uVar2 = iVar10 + (int)param_2[1] * iVar8;
    if (*(char *)((long)param_2 + 0xc) == '\0') {
      if (((int)uVar2 < 0) || (*(int *)(lVar9 + 0x68) <= (int)uVar2)) goto LAB_01dd2438;
      plVar11 = *(long **)(*(long *)(lVar9 + 0x70) + (ulong)uVar2 * 8);
    }
    else {
      if (((int)uVar2 < 0) || (*(int *)(lVar9 + 0x58) <= (int)uVar2)) {
LAB_01dd2438:
        if (bVar5) {
          lVar7 = *(long *)(param_1 + 0x58);
          *(undefined ***)(lVar7 + 0x70) = &PTR_LAB_04a5b6e0;
          *(long *)(lVar7 + 0x78) = param_1;
          *(long *)(lVar7 + 0x80) = lVar9;
          return 1;
        }
        return 0;
      }
      plVar11 = *(long **)(*(long *)(lVar9 + 0x60) + (ulong)uVar2 * 8);
    }
    if ((plVar11 == (long *)0x0) || (*plVar11 == 0)) goto LAB_01dd2438;
    if (((char)plVar11[0xd9] == '\0') && ((*(byte *)(plVar11 + 0x30e) & 1) == 0)) {
      lVar7 = *(long *)(param_1 + 0x58);
      if (*(int *)(lVar7 + 0xe8) < *(int *)(lVar7 + 0xec)) {
        puVar4 = *(undefined8 **)(lVar7 + 0xf8);
        if (puVar4 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar7 + 0xf8) = *puVar4;
        }
        *(undefined4 *)(puVar4 + 1) = 0;
        *(undefined4 *)(puVar4 + 6) = 0x31;
        *(undefined1 *)((long)puVar4 + 0x34) = 0;
        *(undefined1 *)((long)puVar4 + 100) = 0;
        *(undefined2 *)(puVar4 + 0xd) = 0;
        *(undefined1 *)((long)puVar4 + 0x6a) = 0;
        *(undefined4 *)puVar4 = 0;
        *(undefined4 *)(puVar4 + 0xe) = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[4] = puVar1;
        puVar4[5] = (undefined4 *)((long)puVar4 + 0x34);
        if (*(int *)(lVar7 + 0xe8) < *(int *)(lVar7 + 0xec)) {
          *(undefined8 **)(*(long *)(lVar7 + 0xf0) + (long)*(int *)(lVar7 + 0xe8) * 8) = puVar4;
          *(int *)(lVar7 + 0xe8) = *(int *)(lVar7 + 0xe8) + 1;
        }
        *(undefined4 *)puVar4 = 3;
        memcpy(puVar4 + 0xf,plVar11 + 1,0x6b8);
      }
      bVar5 = true;
    }
    if (((char)plVar11[0x16c] == '\0') && ((*(byte *)(plVar11 + 0x30e) >> 1 & 1) == 0)) {
      lVar7 = *(long *)(param_1 + 0x58);
      if (*(int *)(lVar7 + 0xe8) < *(int *)(lVar7 + 0xec)) {
        puVar4 = *(undefined8 **)(lVar7 + 0xf8);
        if (puVar4 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar7 + 0xf8) = *puVar4;
        }
        *(undefined4 *)(puVar4 + 1) = 0;
        *(undefined1 *)((long)puVar4 + 0x34) = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        *(undefined4 *)(puVar4 + 6) = 0x31;
        *(undefined1 *)((long)puVar4 + 100) = 0;
        *(undefined2 *)(puVar4 + 0xd) = 0;
        *(undefined1 *)((long)puVar4 + 0x6a) = 0;
        *(undefined4 *)puVar4 = 0;
        *(undefined4 *)(puVar4 + 0xe) = 0;
        puVar4[4] = puVar3 + 0x10;
        puVar4[5] = (undefined4 *)((long)puVar4 + 0x34);
        if (*(int *)(lVar7 + 0xe8) < *(int *)(lVar7 + 0xec)) {
          *(undefined8 **)(*(long *)(lVar7 + 0xf0) + (long)*(int *)(lVar7 + 0xe8) * 8) = puVar4;
          *(int *)(lVar7 + 0xe8) = *(int *)(lVar7 + 0xe8) + 1;
        }
        *(undefined4 *)puVar4 = 4;
        memcpy(puVar4 + 0xf,plVar11 + 1,0x6b8);
      }
      bVar5 = true;
    }
    iVar8 = *(int *)(param_1 + 0x4c);
    iVar10 = iVar10 + 1;
    if (iVar8 <= iVar10) goto LAB_01dd2438;
  } while( true );
}

