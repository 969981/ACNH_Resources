
void FUN_03892740(long param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  uVar4 = *param_2;
  if (0 < (int)uVar4) {
    uVar5 = 0;
    do {
      uVar8 = uVar5;
      if (uVar4 <= uVar5) {
        uVar8 = 0;
      }
      uVar4 = uVar5;
      if (*(uint *)(param_1 + 0x4b8) <= uVar5) {
        uVar4 = 0;
      }
      uVar5 = uVar5 + 1;
      *(undefined1 *)(*(long *)(param_1 + 0x4c0) + (ulong)uVar4) =
           *(undefined1 *)(*(long *)(param_2 + 2) + (ulong)uVar8);
      uVar4 = *param_2;
    } while ((int)uVar5 < (int)uVar4);
  }
  if (*(char *)(param_1 + 0x518) != '\0') {
    if (0 < *(int *)(param_1 + 0x568)) {
      lVar7 = 0;
      puVar9 = *(undefined8 **)(param_1 + 0x578);
      do {
        puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x570) + lVar7 * 8);
        lVar7 = lVar7 + 1;
        *puVar10 = puVar9;
        *(undefined8 **)(param_1 + 0x578) = puVar10;
        puVar9 = puVar10;
      } while (lVar7 < *(int *)(param_1 + 0x568));
    }
    *(undefined4 *)(param_1 + 0x568) = 0;
    if (*(char *)(param_1 + 0x5a0) != '\0') {
      uVar4 = 0;
      do {
        uVar5 = uVar4;
        if (*(uint *)(param_1 + 0x508) <= uVar4) {
          uVar5 = 0;
        }
        uVar4 = uVar4 + 1;
        puVar9 = (undefined8 *)(*(long *)(param_1 + 0x510) + (ulong)uVar5 * 0x10);
        *puVar9 = 0;
        *(undefined2 *)(puVar9 + 1) = 0;
      } while (uVar4 < *(byte *)(param_1 + 0x5a0));
    }
  }
  if (*(ushort *)(param_1 + 0x538) != 0) {
    uVar4 = *(ushort *)(param_1 + 0x538) + 1;
    uVar5 = uVar4 >> 1;
    if (uVar5 == 1) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      do {
        uVar2 = uVar8;
        if (*(uint *)(param_1 + 0x520) <= uVar8) {
          uVar2 = 0;
        }
        *(undefined1 *)(*(long *)(param_1 + 0x528) + (ulong)uVar2) = 0xff;
        uVar2 = 0;
        if (uVar8 + 1 < *(uint *)(param_1 + 0x520)) {
          uVar2 = uVar8 + 1;
        }
        uVar8 = uVar8 + 2;
        *(undefined1 *)(*(long *)(param_1 + 0x528) + (ulong)uVar2) = 0xff;
      } while (uVar8 != (uVar5 & 0xfffe));
    }
    if ((uVar4 >> 1 & 1) != 0) {
      if (*(uint *)(param_1 + 0x520) <= uVar8) {
        uVar8 = 0;
      }
      *(undefined1 *)(*(long *)(param_1 + 0x528) + (ulong)uVar8) = 0xff;
    }
  }
  *(undefined1 *)(param_1 + 0x518) = 0;
  uVar4 = *param_2;
  if (0 < (int)uVar4) {
    uVar5 = 0;
    do {
      uVar8 = uVar5;
      if (uVar4 <= uVar5) {
        uVar8 = 0;
      }
      uVar4 = uVar5;
      if (*(uint *)(param_1 + 0x520) <= uVar5) {
        uVar4 = 0;
      }
      uVar5 = uVar5 + 1;
      *(undefined1 *)(*(long *)(param_1 + 0x528) + (ulong)uVar4) =
           *(undefined1 *)(*(long *)(param_2 + 2) + (ulong)uVar8);
      uVar4 = *param_2;
    } while ((int)uVar5 < (int)uVar4);
  }
  uVar4 = nn::os::GetSystemTick();
  uVar5 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  uVar4 = uVar5 ^ uVar5 * 0x800;
  uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 2;
  uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 3;
  uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 4;
  iVar6 = (int)((ulong)(uVar4 >> 8 ^ uVar5 >> 0x13 ^ uVar4 ^ uVar5) * 0xe >> 0x20);
  iVar1 = iVar6 + 2;
  if (iVar6 + 1U != (uint)*(byte *)(param_1 + 0x588)) {
    iVar1 = iVar6 + 1;
  }
  *(int *)(param_1 + 0x530) = iVar1;
  uVar4 = *(uint *)(param_1 + 0x590);
  if (0 < (int)uVar4) {
    uVar5 = 0;
    do {
      uVar8 = uVar5;
      if (uVar4 <= uVar5) {
        uVar8 = 0;
      }
      uVar5 = uVar5 + 1;
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x598) + (ulong)uVar8 * 0x10);
      *puVar9 = 0;
      *(undefined2 *)(puVar9 + 1) = 0;
      uVar4 = *(uint *)(param_1 + 0x590);
    } while ((int)uVar5 < (int)uVar4);
  }
  uVar4 = *(uint *)(param_1 + 0x520);
  if (0 < (int)uVar4) {
    uVar5 = 0;
    uVar8 = 0;
    do {
      uVar2 = uVar5;
      if (uVar4 <= uVar5) {
        uVar2 = 0;
      }
      cVar3 = *(char *)(*(long *)(param_1 + 0x528) + (ulong)uVar2);
      if ((int)cVar3 != 0xffffffff) {
        uVar4 = (uint)cVar3;
        if (*(uint *)(param_1 + 0x4f8) < (uint)(int)cVar3 || *(uint *)(param_1 + 0x4f8) == uVar4) {
          uVar4 = 0;
        }
        puVar9 = (undefined8 *)(*(long *)(param_1 + 0x500) + (long)(int)uVar4 * 0x10);
        uVar4 = uVar8;
        if (*(uint *)(param_1 + 0x590) <= uVar8) {
          uVar4 = 0;
        }
        uVar8 = uVar8 + 1;
        puVar10 = (undefined8 *)(*(long *)(param_1 + 0x598) + (long)(int)uVar4 * 0x10);
        uVar11 = *puVar9;
        *(undefined2 *)(puVar10 + 1) = *(undefined2 *)(puVar9 + 1);
        *puVar10 = uVar11;
        uVar4 = *(uint *)(param_1 + 0x520);
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)uVar4);
  }
  *(undefined1 *)(param_1 + 0x518) = 1;
  return;
}

