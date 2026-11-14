
undefined8 FUN_01dd2930(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  void *__dest;
  void *__src;
  long lVar10;
  ulong uVar11;
  
  if (*(int *)(param_1 + 8) != 0) {
    return 0;
  }
  uVar5 = 0;
  *(undefined1 *)(param_1 + 0x160) = 0;
  if (((*(char *)(param_1 + 0x161) != '\0') && (*(char *)(param_1 + 0x162) != '\0')) &&
     (*(char *)(param_1 + 0x163) == '\0')) {
    if (((*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) == 0) ||
        (1 < *(int *)(*(long *)PTR_DAT_04bb21d0 + 0xc4) - 1U)) &&
       ((*(short *)param_2[1] != 0 || ((char)param_2[8] != '\0')))) {
      lVar10 = *(long *)(param_1 + 0xf8);
      __dest = *(void **)(lVar10 + 8);
      (**(code **)(*param_2 + 0x18))(param_2);
      __src = (void *)param_2[1];
      if (__dest != __src) {
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar7 = 0;
        do {
          if (*(short *)(param_2[1] + lVar7 * 2) == 0) goto LAB_01dd2a3c;
          lVar1 = param_2[1] + lVar7 * 2;
          if (*(short *)(lVar1 + 2) == 0) {
            lVar7 = lVar7 + 1;
            goto LAB_01dd2a3c;
          }
          if (*(short *)(lVar1 + 4) == 0) {
            lVar7 = lVar7 + 2;
            goto LAB_01dd2a3c;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        lVar7 = 0;
LAB_01dd2a3c:
        iVar2 = *(int *)(lVar10 + 0x10);
        uVar3 = (uint)lVar7;
        if (iVar2 <= (int)(uint)lVar7) {
          uVar3 = iVar2 - 1;
        }
        uVar11 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar3 << 1;
        memcpy(__dest,__src,uVar11);
        *(undefined2 *)((long)__dest + uVar11) = 0;
      }
      *(char *)(*(long *)(param_1 + 0xf8) + 0x40) = (char)param_2[8];
      FUN_01d71e50(*(undefined8 *)(param_1 + 0xf0));
      lVar10 = *(long *)(param_1 + 0xf0);
      if (0 < *(int *)(lVar10 + 0x28)) {
        lVar7 = 0;
        do {
          puVar9 = *(undefined8 **)(*(long *)(lVar10 + 0x30) + lVar7 * 8);
          lVar7 = lVar7 + 1;
          *puVar9 = 0;
          *(undefined1 *)(puVar9 + 0xd8) = 0;
          *(undefined1 *)(puVar9 + 0xd9) = 0;
          *(undefined1 *)(puVar9 + 0x16c) = 0;
          *(undefined1 *)(puVar9 + 0x30e) = 0;
        } while (lVar7 < *(int *)(lVar10 + 0x28));
      }
      uVar3 = *(uint *)(lVar10 + 0x58);
      if (0 < (int)uVar3) {
        uVar11 = (ulong)uVar3 & 3;
        if (uVar3 < 4) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          do {
            lVar7 = uVar8 * 8;
            uVar8 = uVar8 + 4;
            *(undefined8 *)(*(long *)(lVar10 + 0x60) + lVar7) = 0;
            *(undefined8 *)(*(long *)(lVar10 + 0x60) + lVar7 + 8) = 0;
            *(undefined8 *)(*(long *)(lVar10 + 0x60) + lVar7 + 0x10) = 0;
            *(undefined8 *)(*(long *)(lVar10 + 0x60) + lVar7 + 0x18) = 0;
          } while (((ulong)uVar3 & 0xfffffffc) != uVar8);
        }
        if ((uVar3 & 3) != 0) {
          lVar7 = uVar8 << 3;
          do {
            uVar11 = uVar11 - 1;
            *(undefined8 *)(*(long *)(lVar10 + 0x60) + lVar7) = 0;
            lVar7 = lVar7 + 8;
          } while (uVar11 != 0);
        }
      }
      uVar3 = *(uint *)(lVar10 + 0x68);
      if (0 < (int)uVar3) {
        uVar11 = (ulong)uVar3 & 3;
        if (uVar3 < 4) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          do {
            lVar7 = uVar8 * 8;
            uVar8 = uVar8 + 4;
            *(undefined8 *)(*(long *)(lVar10 + 0x70) + lVar7) = 0;
            *(undefined8 *)(*(long *)(lVar10 + 0x70) + lVar7 + 8) = 0;
            *(undefined8 *)(*(long *)(lVar10 + 0x70) + lVar7 + 0x10) = 0;
            *(undefined8 *)(*(long *)(lVar10 + 0x70) + lVar7 + 0x18) = 0;
          } while (((ulong)uVar3 & 0xfffffffc) != uVar8);
        }
        if ((uVar3 & 3) != 0) {
          lVar7 = uVar8 << 3;
          do {
            uVar11 = uVar11 - 1;
            *(undefined8 *)(*(long *)(lVar10 + 0x70) + lVar7) = 0;
            lVar7 = lVar7 + 8;
          } while (uVar11 != 0);
        }
      }
      *(undefined8 *)(lVar10 + 0x98) = 0;
      if (*(void **)(lVar10 + 0x78) != (void *)0x0) {
        iVar4 = *(int *)(lVar10 + 0x80);
        iVar2 = iVar4 + 0x1e;
        if (0 < iVar4) {
          iVar2 = iVar4 + -1;
        }
        uVar3 = (iVar2 >> 5) + 1;
        memset(*(void **)(lVar10 + 0x78),0,
               -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2);
      }
      if (*(void **)(lVar10 + 0x88) != (void *)0x0) {
        iVar4 = *(int *)(lVar10 + 0x90);
        iVar2 = iVar4 + 0x1e;
        if (0 < iVar4) {
          iVar2 = iVar4 + -1;
        }
        uVar3 = (iVar2 >> 5) + 1;
        memset(*(void **)(lVar10 + 0x88),0,
               -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2);
      }
      *(undefined4 *)(param_1 + 0xd0) = 0;
      uVar6 = 0xb;
      if (*(char *)(*(long *)(param_1 + 0xf8) + 0x40) != '\0') {
        uVar6 = 0xd;
      }
      *(undefined4 *)(param_1 + 0x48) = uVar6;
      FUN_03ebb160(param_1,6);
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}

