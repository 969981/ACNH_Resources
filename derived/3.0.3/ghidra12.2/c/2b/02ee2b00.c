
void FUN_02ee2b00(long param_1,uint *param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  byte bVar10;
  uint *__dest;
  uint *__src;
  uint *puVar11;
  uint *puVar12;
  
  if (((*(int *)(param_1 + 0x1f0) != -1 || *(int *)(param_1 + 500) != -1) ||
       1 < *(uint *)(param_1 + 0x1b0)) && (*(int *)(param_1 + 0x218) < *(int *)(param_1 + 0x21c))) {
    if ((char)param_2[0x1c] == '\0') {
      uVar6 = (ulong)*param_2;
      uVar7 = (ulong)param_2[1];
    }
    else {
      uVar7 = *(ulong *)(param_2 + 0x1d) >> 0x20;
      uVar6 = *(ulong *)(param_2 + 0x1d) & 0xffffffff;
    }
    uVar5 = FUN_02ee2de0(uVar6,uVar7);
    if (uVar5 != 0xffffffff) {
      if ((param_2[1] == 5) || (*param_2 == 0xffffffff)) {
        bVar3 = false;
      }
      else {
        bVar3 = param_2[1] != 0xffffffff;
      }
      if ((param_2[3] == 5) || (param_2[2] == 0xffffffff)) {
        bVar4 = false;
      }
      else {
        bVar4 = param_2[3] != 0xffffffff;
      }
      iVar8 = *(int *)(param_1 + 0x218);
      if (iVar8 < *(int *)(param_1 + 0x21c)) {
        puVar12 = *(uint **)(param_1 + 0x228);
        if (puVar12 != (uint *)0x0) {
          *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)puVar12;
        }
        *(undefined1 *)((long)puVar12 + 99) = 0;
        puVar12[0] = 0xffffffff;
        puVar12[1] = 0xffffffff;
        puVar12[2] = 0xffffffff;
        puVar12[3] = 0xffffffff;
        puVar12[8] = 0x40;
        __dest = puVar12 + 9;
        *(undefined1 *)__dest = 0;
        puVar1 = PTR_DAT_04bb2bc0 + 0x10;
        puVar12[0x1b] = 0;
        puVar12[0x1d] = 0xffffffff;
        puVar12[0x1e] = 0xffffffff;
        *(undefined1 *)(puVar12 + 0x1c) = 0;
        puVar12[0x20] = 0xffffffff;
        *(undefined **)(puVar12 + 4) = puVar1;
        *(uint **)(puVar12 + 6) = __dest;
        *(undefined1 *)(puVar12 + 0x1a) = 0xff;
        if (*(int *)(param_1 + 0x218) < *(int *)(param_1 + 0x21c)) {
          *(uint **)(*(long *)(param_1 + 0x220) + (long)*(int *)(param_1 + 0x218) * 8) = puVar12;
          *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
          __dest = *(uint **)(puVar12 + 6);
        }
        *puVar12 = *param_2;
        puVar12[1] = param_2[1];
        puVar12[2] = param_2[2];
        puVar12[3] = param_2[3];
        puVar11 = param_2 + 4;
        (**(code **)(*(long *)puVar11 + 0x18))(puVar11);
        __src = *(uint **)(param_2 + 6);
        if (__dest != __src) {
          (**(code **)(*(long *)(param_2 + 4) + 0x18))(puVar11);
          lVar9 = 0;
          do {
            if (*(char *)(*(long *)(param_2 + 6) + lVar9) == '\0') goto LAB_02ee2d0c;
            lVar2 = *(long *)(param_2 + 6) + lVar9;
            if (*(char *)(lVar2 + 1) == '\0') {
              lVar9 = lVar9 + 1;
              goto LAB_02ee2d0c;
            }
            if (*(char *)(lVar2 + 2) == '\0') {
              lVar9 = lVar9 + 2;
              goto LAB_02ee2d0c;
            }
            lVar9 = lVar9 + 3;
          } while (lVar9 != 0x80001);
          lVar9 = 0;
LAB_02ee2d0c:
          iVar8 = (int)lVar9;
          if ((int)puVar12[8] <= (int)lVar9) {
            iVar8 = puVar12[8] - 1;
          }
          memcpy(__dest,__src,(long)iVar8);
          *(undefined1 *)((long)__dest + (long)iVar8) = 0;
        }
        bVar10 = (byte)param_2[0x1a];
        if (7 < bVar10) {
          bVar10 = 0xff;
        }
        *(byte *)(puVar12 + 0x1a) = bVar10;
        puVar12[0x1b] = param_2[0x1b];
        puVar12[0x1d] = param_2[0x1d];
        puVar12[0x1e] = param_2[0x1e];
        *(char *)(puVar12 + 0x1c) = (char)param_2[0x1c];
        if (bVar3) {
          *puVar12 = 0xffffffff;
        }
        if (bVar4) {
          puVar12[2] = 0xffffffff;
        }
        puVar12[0x20] = uVar5;
        iVar8 = *(int *)(param_1 + 0x218);
      }
      if (iVar8 == 1) {
        bVar10 = (byte)param_2[0x1a];
        if (7 < bVar10) {
          bVar10 = 0xff;
        }
        *(byte *)(param_1 + 0x238) = bVar10;
        bVar10 = 0x10;
        if ((param_3 & 1) == 0) {
          bVar10 = 0x20;
        }
        *(byte *)(param_1 + 0x239) = *(byte *)(param_1 + 0x239) | bVar10;
      }
    }
  }
  return;
}

