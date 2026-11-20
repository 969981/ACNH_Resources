
void FUN_03d4d620(long param_1,long *param_2,undefined8 param_3)

{
  size_t __size;
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong *puVar6;
  void *pvVar7;
  long *plVar8;
  int iVar9;
  uint uVar10;
  ulong *puVar11;
  char *pcVar12;
  byte *pbVar13;
  ulong *puVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  undefined1 *__dest;
  undefined1 *puVar22;
  uint local_1c0;
  undefined1 auStack_1bc [36];
  undefined *local_198;
  undefined1 *local_190;
  undefined4 local_188;
  undefined1 local_184 [255];
  undefined1 local_85;
  undefined1 local_80;
  undefined *local_78;
  char *local_70;
  
  *(undefined8 *)(param_1 + 0xb8) = param_3;
  FUN_03b1307c(param_1 + 0x30);
  uVar10 = *(uint *)(*(long *)(param_1 + 0x30) + 0x38);
  uVar20 = (ulong)uVar10;
  if (0 < (int)uVar10) {
    __size = uVar20 * 0x18 + 8;
    lVar21 = *(long *)PTR_DAT_04bb2698;
    if (lVar21 == 0) {
      puVar6 = malloc(__size);
    }
    else {
      plVar5 = param_2;
      if (param_2 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar5 = (long *)(lVar21 + 8);
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_03d4d784;
      }
      puVar6 = (ulong *)(**(code **)(*plVar5 + 0x30))(plVar5,__size,8);
    }
    if (puVar6 != (ulong *)0x0) {
      uVar18 = uVar20 * 0x18 - 0x18;
      puVar11 = puVar6 + 1;
      *puVar6 = uVar20;
      puVar1 = PTR_DAT_04bd4558;
      uVar15 = ((uint)(uVar18 / 0x18) & 0xfffffff) + 1;
      uVar16 = (ulong)uVar15 & 3;
      puVar14 = puVar11;
      if ((uVar15 & 3) != 0) {
        puVar2 = PTR_DAT_04bd4558 + 0x10;
        do {
          puVar14 = puVar6;
          *(undefined4 *)(puVar14 + 3) = 0;
          uVar16 = uVar16 - 1;
          puVar14[1] = (ulong)puVar2;
          puVar14[2] = 0;
          puVar6 = puVar14 + 3;
        } while (uVar16 != 0);
        puVar14 = puVar14 + 4;
      }
      if (0x47 < uVar18) {
        puVar1 = puVar1 + 0x10;
        do {
          *(undefined4 *)(puVar14 + 2) = 0;
          *(undefined4 *)(puVar14 + 5) = 0;
          *(undefined4 *)(puVar14 + 8) = 0;
          *(undefined4 *)(puVar14 + 0xb) = 0;
          *puVar14 = (ulong)puVar1;
          puVar14[1] = 0;
          puVar14[3] = (ulong)puVar1;
          puVar14[4] = 0;
          puVar14[6] = (ulong)puVar1;
          puVar14[7] = 0;
          puVar14[9] = (ulong)puVar1;
          puVar14[10] = 0;
          puVar14 = puVar14 + 0xc;
        } while (puVar14 != puVar11 + uVar20 * 3);
      }
      *(uint *)(param_1 + 0x90) = uVar10;
      *(ulong **)(param_1 + 0x98) = puVar11;
    }
  }
LAB_03d4d784:
  iVar3 = *(int *)(*(long *)(param_1 + 0x30) + 0x38);
  if (0 < iVar3) {
    lVar21 = *(long *)PTR_DAT_04bb2698;
    if (lVar21 == 0) {
      pvVar7 = malloc((long)iVar3 << 3);
    }
    else {
      plVar5 = param_2;
      if (param_2 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar5 = (long *)(lVar21 + 8);
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_03d4d804;
      }
      pvVar7 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(long)iVar3 << 3,8);
    }
    if (pvVar7 != (void *)0x0) {
      *(void **)(param_1 + 0xa8) = pvVar7;
      *(undefined4 *)(param_1 + 0xa0) = 0;
      *(int *)(param_1 + 0xa4) = iVar3;
    }
  }
LAB_03d4d804:
  local_85 = 0;
  local_188 = 0x100;
  local_190 = local_184;
  local_184[0] = 0;
  plVar5 = *(long **)(param_1 + 0x30);
  local_80 = 0;
  local_198 = PTR_DAT_04bb21f8 + 0x10;
  local_1c0 = 0xffffffff;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_70 = "";
  local_78 = puVar1;
  (**(code **)(*plVar5 + 0x50))(plVar5,auStack_1bc,&local_78);
  iVar3 = (**(code **)(*plVar5 + 0x60))(plVar5,auStack_1bc,&local_198,1);
  if (iVar3 == 1) {
    puVar2 = PTR_DAT_04bb2d88 + 0x10;
LAB_03d4d8e4:
    local_1c0 = local_1c0 + 1;
    local_70 = ".msbf";
    local_78 = puVar1;
    (**(code **)(local_198 + 0x18))(&local_198);
    lVar21 = 0;
    do {
      if (local_190[lVar21] == '\0') goto LAB_03d4d954;
      if (local_190[lVar21 + 1] == '\0') {
        lVar21 = lVar21 + 1;
        goto LAB_03d4d954;
      }
      if (local_190[lVar21 + 2] == '\0') {
        lVar21 = lVar21 + 2;
        goto LAB_03d4d954;
      }
      lVar21 = lVar21 + 3;
    } while (lVar21 != 0x80001);
    lVar21 = 0;
LAB_03d4d954:
    (**(code **)(local_78 + 0x18))(&local_78);
    lVar4 = 0;
    do {
      iVar3 = (int)lVar21;
      if (local_70[lVar4] == '\0') {
LAB_03d4d9a4:
        iVar9 = (int)lVar4;
        if (iVar3 < iVar9) goto LAB_03d4d8c0;
LAB_03d4d9bc:
        if ((int)lVar4 < 1) goto LAB_03d4da44;
        uVar20 = 0;
        goto LAB_03d4d9d0;
      }
      if (local_70[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_03d4d9a4;
      }
      if (local_70[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        iVar9 = (int)lVar4;
        if (iVar9 <= iVar3) goto LAB_03d4d9bc;
        goto LAB_03d4d8c0;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    if (-1 < iVar3) {
LAB_03d4da44:
      (**(code **)(local_78 + 0x18))(&local_78);
LAB_03d4da68:
      uVar10 = local_1c0;
      if (*(uint *)(param_1 + 0x90) <= local_1c0) {
        uVar10 = 0;
      }
      lVar4 = *(long *)(param_1 + 0x98) + (long)(int)uVar10 * 0x18;
      (**(code **)(*plVar5 + 0x38))(plVar5,local_1c0,0);
      *(long **)PTR_DAT_04bd0f60 = param_2;
      DAT_05ae78a0 = PTR_LAB_04bd0f50;
      DAT_05ae78a8 = (code *)PTR_FUN_04bd0f58;
      lVar21 = FUN_03d4e210();
      *(long *)(lVar4 + 8) = lVar21;
      if (*(int *)(lVar21 + 0x20) == -1) {
        if (*(long *)(lVar21 + 0x18) != 0) {
          (*DAT_05ae78a8)();
        }
        (*DAT_05ae78a8)(lVar21);
        uVar10 = 0;
        *(undefined8 *)(lVar4 + 8) = 0;
      }
      else {
        uVar10 = (uint)**(ushort **)
                         (*(long *)(lVar21 + 0x18) + (long)*(int *)(lVar21 + 0x20) * 0x18);
      }
      *(uint *)(lVar4 + 0x10) = uVar10;
      DAT_05ae78a8 = (code *)0x0;
      DAT_05ae78a0 = (undefined *)0x0;
      lVar21 = *(long *)PTR_DAT_04bb2698;
      *(undefined8 *)PTR_DAT_04bd0f60 = 0;
      if (lVar21 == 0) {
        plVar8 = malloc(0xa0);
      }
      else {
        plVar8 = param_2;
        if (param_2 == (long *)0x0) {
          lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar8 = (long *)(lVar21 + 8);
          if (lVar4 != 0) {
            plVar8 = (long *)(lVar4 + 0xa8);
          }
          plVar8 = (long *)*plVar8;
        }
        plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0xa0,8);
      }
      *(undefined1 *)((long)plVar8 + 0x93) = 0;
      *(undefined4 *)(plVar8 + 2) = 0x80;
      __dest = (undefined1 *)((long)plVar8 + 0x14);
      *__dest = 0;
      *plVar8 = (long)puVar2;
      plVar8[1] = (long)__dest;
      plVar8[0x13] = -1;
      (**(code **)(local_198 + 0x18))(&local_198);
      puVar22 = local_190;
      if (__dest != local_190) {
        (**(code **)(local_198 + 0x18))(&local_198);
        lVar21 = 0;
        do {
          if (local_190[lVar21] == '\0') goto LAB_03d4dc2c;
          if (local_190[lVar21 + 1] == '\0') {
            lVar21 = lVar21 + 1;
            goto LAB_03d4dc2c;
          }
          if (local_190[lVar21 + 2] == '\0') {
            lVar21 = lVar21 + 2;
            goto LAB_03d4dc2c;
          }
          lVar21 = lVar21 + 3;
        } while (lVar21 != 0x80001);
        lVar21 = 0;
LAB_03d4dc2c:
        iVar3 = (int)lVar21;
        if ((int)plVar8[2] <= (int)lVar21) {
          iVar3 = (int)plVar8[2] + -1;
        }
        memcpy(__dest,puVar22,(long)iVar3);
        __dest[iVar3] = 0;
      }
      (**(code **)(*plVar8 + 0x18))(plVar8);
      pbVar13 = (byte *)plVar8[1];
      uVar10 = (uint)*pbVar13;
      if (*pbVar13 != 0) {
        uVar15 = 0xffffffff;
        do {
          pbVar13 = pbVar13 + 1;
          uVar15 = crc32b(uVar15,uVar10,0x4c11db7);
          uVar10 = (uint)*pbVar13;
        } while (uVar10 != 0);
        uVar10 = ~uVar15;
      }
      *(uint *)(plVar8 + 0x13) = uVar10;
      *(uint *)((long)plVar8 + 0x9c) = local_1c0;
      if (*(int *)(param_1 + 0xa0) < *(int *)(param_1 + 0xa4)) {
        *(long **)(*(long *)(param_1 + 0xa8) + (long)*(int *)(param_1 + 0xa0) * 8) = plVar8;
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
      }
    }
    goto LAB_03d4d8c0;
  }
LAB_03d4dcc0:
  if (1 < *(int *)(param_1 + 0xa0)) {
    lVar21 = *(long *)(param_1 + 0xa8);
    uVar15 = 0;
    uVar10 = *(int *)(param_1 + 0xa0) - 1;
    do {
      if ((int)uVar10 <= (int)uVar15) break;
      lVar4 = *(long *)(lVar21 + (ulong)uVar15 * 8);
      uVar20 = (ulong)uVar15;
      if ((uVar10 - uVar15 & 1) == 0) {
        lVar17 = lVar4;
        uVar16 = uVar20;
      }
      else {
        uVar16 = uVar20 + 1;
        lVar17 = *(long *)(lVar21 + uVar16 * 8);
        if (*(uint *)(lVar17 + 0x98) < *(uint *)(lVar4 + 0x98)) {
          *(long *)(lVar21 + uVar16 * 8) = lVar4;
          *(long *)(lVar21 + uVar20 * 8) = lVar17;
          lVar17 = lVar4;
        }
      }
      uVar18 = (ulong)uVar10;
      uVar10 = uVar15;
      if (~uVar20 + uVar18 != 0) {
        plVar8 = (long *)(lVar21 + 8 + uVar16 * 8);
        do {
          lVar4 = *plVar8;
          if (*(uint *)(lVar4 + 0x98) < *(uint *)(lVar17 + 0x98)) {
            plVar8[-1] = lVar4;
            *plVar8 = lVar17;
            uVar10 = (uint)uVar16;
          }
          else {
            lVar17 = lVar4;
          }
          lVar4 = plVar8[1];
          if (*(uint *)(lVar4 + 0x98) < *(uint *)(lVar17 + 0x98)) {
            uVar10 = (uint)uVar16 + 1;
            *plVar8 = lVar4;
            plVar8[1] = lVar17;
          }
          else {
            lVar17 = lVar4;
          }
          uVar16 = uVar16 + 2;
          plVar8 = plVar8 + 2;
        } while (uVar18 != uVar16);
      }
      if ((int)uVar10 <= (int)uVar15) break;
      lVar4 = *(long *)(lVar21 + (ulong)uVar10 * 8);
      uVar16 = (ulong)uVar10;
      uVar15 = uVar10;
      do {
        lVar17 = lVar21 + uVar16 * 8;
        lVar19 = *(long *)(lVar17 + -8);
        if (*(uint *)(lVar4 + 0x98) < *(uint *)(lVar19 + 0x98)) {
          uVar15 = (uint)uVar16;
          *(long *)(lVar17 + -8) = lVar4;
          *(long *)(lVar21 + uVar16 * 8) = lVar19;
        }
        else {
          lVar4 = lVar19;
        }
        uVar16 = uVar16 - 1;
      } while ((long)uVar20 < (long)uVar16);
    } while (uVar15 != uVar10);
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x58))(plVar5,auStack_1bc);
  }
  return;
  while( true ) {
    pcVar12 = local_70;
    lVar21 = lVar4;
    while( true ) {
      lVar21 = lVar21 + -1;
      if (puVar22[uVar20] != *pcVar12) break;
      if (puVar22[uVar20] == '\0') goto LAB_03d4da60;
      puVar22 = puVar22 + 1;
      pcVar12 = pcVar12 + 1;
      if (lVar21 == 0) goto LAB_03d4da60;
    }
    uVar20 = uVar20 + 1;
    if (uVar20 == (iVar3 - iVar9) + 1) break;
LAB_03d4d9d0:
    puVar22 = local_190;
    pcVar12 = local_190 + uVar20;
    (**(code **)(local_78 + 0x18))(&local_78);
    if (pcVar12 == local_70) {
LAB_03d4da60:
      if (-1 < (int)uVar20) goto LAB_03d4da68;
      break;
    }
  }
LAB_03d4d8c0:
  iVar3 = (**(code **)(*plVar5 + 0x60))(plVar5,auStack_1bc,&local_198,1);
  if (iVar3 != 1) goto LAB_03d4dcc0;
  goto LAB_03d4d8e4;
}

