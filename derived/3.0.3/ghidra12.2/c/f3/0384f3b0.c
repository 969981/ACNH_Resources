
void FUN_0384f3b0(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ushort uVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  long lVar11;
  uint uVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  void *__dest;
  void *__src;
  ulong uVar16;
  uint uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined *local_190;
  undefined1 *puStack_188;
  undefined4 local_180;
  undefined1 local_17c [255];
  undefined1 local_7d;
  
  if (*(char *)(param_1 + 0xae) == '\0' || *(char *)(param_1 + 0xb4) != '\0') {
    return;
  }
  uVar17 = 0;
  puVar1 = PTR_DAT_04bb21f8 + 0x10;
  do {
    lVar15 = *(long *)(param_1 + 0x78);
    if (lVar15 == 0) {
      if (-1 < (int)uVar17) break;
    }
    else if (*(int *)(lVar15 + 0x18) <= (int)uVar17) break;
    if ((int)uVar17 < (int)*(uint *)(lVar15 + 0x18)) {
      uVar9 = uVar17;
      if (*(uint *)(lVar15 + 0x18) <= uVar17) {
        uVar9 = 0;
      }
      puVar10 = *(undefined1 **)(*(long *)(lVar15 + 0x20) + (ulong)uVar9 * 0x10);
      lVar15 = *(long *)(puVar10 + 0x70);
      uVar6 = *(ushort *)(lVar15 + 0x5a);
      if ((short)uVar6 < 0) {
        plVar7 = (long *)0x0;
      }
      else {
        uVar16 = (ulong)uVar6;
        if (3 < uVar6) {
          uVar16 = 0;
        }
        plVar7 = *(long **)(lVar15 + uVar16 * 8);
      }
      uVar18 = 0;
      if (plVar7 == *(long **)(lVar15 + 0x90) && *(long **)(lVar15 + 0x90) != (long *)0x0) {
        puVar4 = (undefined8 *)(lVar15 + 0x28) + (uint)(int)(short)uVar6;
        if (3 < (uint)(int)(short)uVar6) {
          puVar4 = (undefined8 *)(lVar15 + 0x28);
        }
        local_190 = *(undefined **)(puVar10 + 0x18);
        puStack_188 = puVar10;
        uVar18 = (**(code **)(*plVar7 + 0x50))(plVar7,&local_190,*puVar4);
      }
    }
    else {
      local_7d = 0;
      local_180 = 0x100;
      local_17c[0] = 0;
      lVar15 = *(long *)(*(long *)(*(long *)(lVar15 + 0x50) + 0x10) + 8);
      local_190 = puVar1;
      puStack_188 = local_17c;
      FUN_038d1270(&local_190,"%s.as",lVar15 + *(int *)(lVar15 + 0x24) + (long)*(int *)(lVar15 + 8))
      ;
      uVar18 = 0;
    }
    uVar9 = uVar17;
    if (*(uint *)(param_1 + 0x80) <= uVar17) {
      uVar9 = 0;
    }
    *(undefined4 *)(*(long *)(param_1 + 0x88) + (ulong)uVar9 * 0xe8 + 0xc0) = uVar18;
    uVar8 = *(uint *)(param_1 + 0x80);
    lVar15 = *(long *)(param_1 + 0x88);
    uVar9 = uVar17;
    if (uVar8 <= uVar17) {
      uVar9 = 0;
    }
    if (*(int *)(lVar15 + (ulong)uVar9 * 0xe8 + 0xc4) != *(int *)(param_1 + 0xb0)) {
      lVar15 = lVar15 + (ulong)uVar9 * 0xe8;
      *(int *)(lVar15 + 200) = *(int *)(lVar15 + 200) + 1;
      uVar8 = *(uint *)(param_1 + 0x80);
      lVar15 = *(long *)(param_1 + 0x88);
    }
    uVar9 = uVar17;
    if (uVar8 <= uVar17) {
      uVar9 = 0;
    }
    puVar13 = (uint *)(lVar15 + (ulong)uVar9 * 0xe8 + 200);
    if (2700000 < *puVar13) {
      *puVar13 = 0x278d00;
      uVar8 = *(uint *)(param_1 + 0x80);
      lVar15 = *(long *)(param_1 + 0x88);
    }
    uVar9 = uVar17;
    if (uVar8 <= uVar17) {
      uVar9 = 0;
    }
    lVar14 = lVar15 + (ulong)uVar9 * 0xe8;
    __dest = *(void **)(lVar14 + 8);
    plVar7 = (long *)(lVar14 + 0x60);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    __src = *(void **)(lVar14 + 0x68);
    if (__dest != __src) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
      lVar11 = 0;
      do {
        if (*(char *)(*(long *)(lVar14 + 0x68) + lVar11) == '\0') goto LAB_0384f630;
        lVar2 = *(long *)(lVar14 + 0x68) + lVar11;
        if (*(char *)(lVar2 + 1) == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_0384f630;
        }
        if (*(char *)(lVar2 + 2) == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_0384f630;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_0384f630:
      iVar3 = (int)lVar11;
      if (*(int *)(lVar14 + 0x10) <= (int)lVar11) {
        iVar3 = *(int *)(lVar14 + 0x10) + -1;
      }
      memcpy(__dest,__src,(long)iVar3);
      *(undefined1 *)((long)__dest + (long)iVar3) = 0;
    }
    *(undefined4 *)(lVar14 + 0x58) = *(undefined4 *)(lVar15 + (ulong)uVar9 * 0xe8 + 0xb8);
    uVar9 = uVar17;
    if (*(uint *)(param_1 + 0x80) <= uVar17) {
      uVar9 = 0;
    }
    *(undefined8 *)(*(long *)(param_1 + 0x88) + (ulong)uVar9 * 0xe8 + 0xd0) = 0;
    uVar9 = 0;
    if (*(long *)(param_1 + 0x78) != 0) {
      uVar9 = *(uint *)(*(long *)(param_1 + 0x78) + 0x18);
    }
    uVar12 = *(uint *)(param_1 + 0x80);
    uVar8 = uVar17;
    if (uVar9 <= uVar17) {
      uVar8 = 0;
    }
    lVar15 = *(long *)(param_1 + 0x88);
    if (uVar12 <= uVar8) {
      uVar8 = 0;
    }
    if (**(char **)(lVar15 + (ulong)uVar8 * 0xe8 + 0x68) != '\0') {
      uVar9 = uVar17;
      if (uVar12 <= uVar17) {
        uVar9 = 0;
      }
      lVar15 = lVar15 + (ulong)uVar9 * 0xe8;
      *(undefined8 *)(lVar15 + 0xd0) = *(undefined8 *)(lVar15 + 0xd8);
      uVar12 = *(uint *)(param_1 + 0x80);
      lVar15 = *(long *)(param_1 + 0x88);
    }
    uVar9 = uVar17;
    if (uVar12 <= uVar17) {
      uVar9 = 0;
    }
    plVar7 = (long *)(lVar15 + (ulong)uVar9 * 0xe8 + 0xd0);
    if (*plVar7 == 0) {
      *plVar7 = (long)&DAT_0407ebb1;
    }
    uVar17 = uVar17 + 1;
  } while( true );
  if (*(char *)(param_2 + 0x98) != '\0') {
    fVar20 = 1.0;
    if (*(long *)(lVar15 + 0x40) != 0) {
      FUN_03ee1930();
      fVar19 = *(float *)(*(long *)(lVar15 + 0x40) + 0x118);
      if (0.0 < fVar19) {
        fVar20 = fVar19;
      }
    }
    FUN_03ec3220(fVar20,lVar15,0,0xffffffff);
    if ((*(long *)(lVar15 + 0x40) != 0) && ((*(byte *)(*(long *)(lVar15 + 0x40) + 300) & 1) != 0)) {
      FUN_03ee1710();
    }
    lVar15 = *(long *)(param_1 + 0x78);
  }
  puVar1 = PTR_PTR_04bb2238;
  if (lVar15 != 0) {
    lVar14 = 0;
    uVar16 = 0;
    do {
      if ((long)*(int *)(lVar15 + 0x18) <= (long)uVar16) break;
      uVar6 = *(ushort *)(*(long *)(*(long *)(lVar15 + 0x20) + lVar14) + 0xb0);
      if ((short)uVar6 < 0) {
LAB_0384f780:
        (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
        uVar5 = uVar16;
        if (*(uint *)(param_1 + 0x80) <= uVar16) {
          uVar5 = 0;
        }
        *(undefined8 *)(*(long *)(param_1 + 0x88) + uVar5 * 0xe8 + 0xd8) =
             *(undefined8 *)(puVar1 + 8);
      }
      else {
        uVar17 = (uint)uVar6;
        lVar15 = *(long *)(*(long *)(param_1 + 0xa0) + 0x50);
        if (*(uint *)(lVar15 + 0x38) <= uVar17) {
          uVar17 = 0;
        }
        uVar17 = *(uint *)(*(long *)(lVar15 + 0x40) + (ulong)uVar17 * 0xb8);
        if (uVar17 < 0xffff0000 && (uVar17 & 0xffff) != 0xffff) {
          uVar17 = (int)uVar17 >> 0x10;
          if (*(uint *)(lVar15 + 0x80) <= uVar17) {
            uVar17 = 0;
          }
          lVar11 = **(long **)(*(long *)(lVar15 + 0x88) + (long)(int)uVar17 * 0x28);
          lVar15 = 0;
          if (lVar11 != 0) {
            lVar15 = *(long *)(lVar11 + 8) + 2;
          }
        }
        else {
          lVar15 = 0;
        }
        uVar5 = uVar16;
        if (*(uint *)(param_1 + 0x80) <= uVar16) {
          uVar5 = 0;
        }
        *(long *)(*(long *)(param_1 + 0x88) + uVar5 * 0xe8 + 0xd8) = lVar15;
        if (lVar15 == 0) goto LAB_0384f780;
        uVar5 = uVar16;
        if (*(uint *)(param_1 + 0x80) <= uVar16) {
          uVar5 = 0;
        }
        *(long *)(*(long *)(param_1 + 0x88) + uVar5 * 0xe8 + 0xe0) = lVar15;
      }
      lVar15 = *(long *)(param_1 + 0x78);
      uVar16 = uVar16 + 1;
      lVar14 = lVar14 + 0x10;
    } while (lVar15 != 0);
  }
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
  return;
}

