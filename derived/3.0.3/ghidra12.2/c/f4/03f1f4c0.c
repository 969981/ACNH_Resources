
undefined8
FUN_03f1f4c0(long param_1,long *param_2,undefined8 *param_3,long param_4,undefined8 param_5)

{
  uint *puVar1;
  char *pcVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  long lVar10;
  undefined4 *puVar11;
  short sVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  uint uVar16;
  uint uVar17;
  short *psVar18;
  ulong uVar19;
  char *pcVar20;
  int iVar21;
  long lVar22;
  undefined8 local_80;
  uint *local_78;
  undefined8 local_68;
  
  *(long *)(param_1 + 0x30) = param_4;
  local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
  uVar6 = FUN_03b36b40(param_3,&local_80,&DAT_040a1c2c);
  puVar14 = &DAT_0407ebb1;
  if (((uVar6 & 1) != 0) && (local_80._4_1_ == -0x60)) {
    psVar18 = (short *)*param_3;
    uVar16 = *(uint *)(psVar18 + 4);
    uVar17 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if (*psVar18 != 0x5942) {
      uVar17 = uVar16;
    }
    if (uVar17 == 0) {
      puVar14 = &DAT_0407ebb1;
    }
    else {
      uVar3 = *(uint *)((long)psVar18 + (long)(int)(uint)local_80 * 4 + (long)(int)uVar17 + 4);
      uVar16 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      uVar16 = uVar16 >> 0x10 | uVar16 << 0x10;
      if (*psVar18 != 0x5942) {
        uVar16 = uVar3;
      }
      puVar14 = (undefined8 *)((long)psVar18 + (ulong)uVar16 + (long)(int)uVar17);
    }
  }
  *(undefined8 **)(param_1 + 8) = puVar14;
  local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
  uVar6 = FUN_03b36b40(param_3,&local_80,&DAT_040a5beb);
  puVar14 = &DAT_0407ebb1;
  if (((uVar6 & 1) != 0) && (local_80._4_1_ == -0x60)) {
    psVar18 = (short *)*param_3;
    uVar16 = *(uint *)(psVar18 + 4);
    uVar17 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if (*psVar18 != 0x5942) {
      uVar17 = uVar16;
    }
    if (uVar17 == 0) {
      puVar14 = &DAT_0407ebb1;
    }
    else {
      uVar3 = *(uint *)((long)psVar18 + (long)(int)(uint)local_80 * 4 + (long)(int)uVar17 + 4);
      uVar16 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      uVar16 = uVar16 >> 0x10 | uVar16 << 0x10;
      if (*psVar18 != 0x5942) {
        uVar16 = uVar3;
      }
      puVar14 = (undefined8 *)((long)psVar18 + (ulong)uVar16 + (long)(int)uVar17);
    }
  }
  *(undefined8 **)(param_1 + 0x28) = puVar14;
  local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
  uVar6 = FUN_03b36b40(param_3,&local_80,&DAT_040747d4);
  if ((uVar6 & 1) != 0) {
    if (local_80._4_1_ == -0x5e) {
      psVar18 = (short *)*param_3;
      uVar16 = *(uint *)((long)psVar18 + ((ulong)local_80 & 0xffffffff));
      sVar12 = *psVar18;
      uVar17 = (uint)local_80 + 8;
    }
    else {
      if (local_80._4_1_ != -0x5f) goto LAB_03f1f688;
      psVar18 = (short *)*param_3;
      uVar16 = *(uint *)((long)psVar18 + ((ulong)local_80 & 0xffffffff));
      sVar12 = *psVar18;
      uVar17 = (uint)local_80 + 4;
    }
    uVar3 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    if (sVar12 != 0x5942) {
      uVar3 = uVar16;
    }
    memcpy((void *)(param_1 + 0x10),(void *)((long)psVar18 + (ulong)uVar17),(ulong)uVar3);
  }
LAB_03f1f688:
  local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
  uVar6 = FUN_03b36b40(param_3,&local_80,&DAT_040fe5ab);
  if (((uVar6 & 1) != 0) && (local_80._4_1_ == -0x60)) {
    psVar18 = (short *)*param_3;
    uVar16 = *(uint *)(psVar18 + 4);
    uVar17 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if (*psVar18 != 0x5942) {
      uVar17 = uVar16;
    }
    if (uVar17 != 0) {
      uVar3 = *(uint *)((long)psVar18 + (long)(int)(uint)local_80 * 4 + (long)(int)uVar17 + 4);
      uVar16 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      local_80 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      uVar16 = uVar16 >> 0x10 | uVar16 << 0x10;
      if (*psVar18 != 0x5942) {
        uVar16 = uVar3;
      }
      local_78 = (uint *)((long)psVar18 + (ulong)uVar16 + (long)(int)uVar17);
      if ((local_78 == (uint *)&DAT_04ba80e0) ||
         ((((cVar4 = (char)*local_78, cVar4 == 'P' && (*(char *)((long)local_78 + 1) == 'l')) &&
           (*(char *)((long)local_78 + 2) == 'a')) &&
          ((*(char *)((long)local_78 + 3) == 'y' && ((char)local_78[1] == '\0')))))) {
        uVar13 = 0;
      }
      else if ((local_78 == (uint *)&DAT_04ba80e6) ||
              (((cVar4 == 'W' && (*(char *)((long)local_78 + 1) == 'a')) &&
               ((*(char *)((long)local_78 + 2) == 'i' &&
                ((*(char *)((long)local_78 + 3) == 't' && ((char)local_78[1] == '\0')))))))) {
        uVar13 = 1;
      }
      else if ((local_78 == (uint *)s_Switch_04ba80ec) ||
              (((((cVar4 == 'S' && (*(char *)((long)local_78 + 1) == 'w')) &&
                 (*(char *)((long)local_78 + 2) == 'i')) &&
                ((*(char *)((long)local_78 + 3) == 't' && ((char)local_78[1] == 'c')))) &&
               ((*(char *)((long)local_78 + 5) == 'h' && (*(char *)((long)local_78 + 6) == '\0')))))
              ) {
        uVar13 = 2;
      }
      else if ((local_78 == (uint *)s_Random_04ba80f4) ||
              ((((cVar4 == 'R' && (*(char *)((long)local_78 + 1) == 'a')) &&
                ((*(char *)((long)local_78 + 2) == 'n' &&
                 (((*(char *)((long)local_78 + 3) == 'd' && ((char)local_78[1] == 'o')) &&
                  (*(char *)((long)local_78 + 5) == 'm')))))) &&
               (*(char *)((long)local_78 + 6) == '\0')))) {
        uVar13 = 3;
      }
      else if ((local_78 == (uint *)s_Start_04ba80fc) ||
              (((cVar4 == 'S' && (*(char *)((long)local_78 + 1) == 't')) &&
               (((*(char *)((long)local_78 + 2) == 'a' &&
                 ((*(char *)((long)local_78 + 3) == 'r' && ((char)local_78[1] == 't')))) &&
                (*(char *)((long)local_78 + 5) == '\0')))))) {
        uVar13 = 4;
      }
      else {
        FUN_006bd3a4(&local_80);
        if ((local_78 == (uint *)&DAT_04ba8103) ||
           (((((char)*local_78 == 'F' && (*(char *)((long)local_78 + 1) == 'o')) &&
             (*(char *)((long)local_78 + 2) == 'r')) &&
            ((*(char *)((long)local_78 + 3) == 'k' && ((char)local_78[1] == '\0')))))) {
          uVar13 = 5;
        }
        else {
          (**(code **)((long)local_80 + 0x18))(&local_80);
          if ((local_78 == (uint *)s_WriteProperty_04ba8109) ||
             ((((((char)*local_78 == 'W' && (*(char *)((long)local_78 + 1) == 'r')) &&
                ((*(char *)((long)local_78 + 2) == 'i' &&
                 (((*(char *)((long)local_78 + 3) == 't' && ((char)local_78[1] == 'e')) &&
                  (*(char *)((long)local_78 + 5) == 'P')))))) &&
               ((*(char *)((long)local_78 + 6) == 'r' && (*(char *)((long)local_78 + 7) == 'o'))))
              && (((char)local_78[2] == 'p' &&
                  (((*(char *)((long)local_78 + 9) == 'e' && (*(char *)((long)local_78 + 10) == 'r')
                    ) && ((*(char *)((long)local_78 + 0xb) == 't' &&
                          (((char)local_78[3] == 'y' && (*(char *)((long)local_78 + 0xd) == '\0'))))
                         )))))))) {
            uVar13 = 6;
          }
          else {
            (**(code **)((long)local_80 + 0x18))(&local_80);
            if ((local_78 != (uint *)s_IncrementProperty_04ba8118) &&
               ((((((char)*local_78 != 'I' || (*(char *)((long)local_78 + 1) != 'n')) ||
                  (*(char *)((long)local_78 + 2) != 'c')) ||
                 (((*(char *)((long)local_78 + 3) != 'r' || ((char)local_78[1] != 'e')) ||
                  ((*(char *)((long)local_78 + 5) != 'm' ||
                   ((*(char *)((long)local_78 + 6) != 'e' || (*(char *)((long)local_78 + 7) != 'n'))
                   )))))) ||
                ((((char)local_78[2] != 't' ||
                  (((((*(char *)((long)local_78 + 9) != 'P' ||
                      (*(char *)((long)local_78 + 10) != 'r')) ||
                     (*(char *)((long)local_78 + 0xb) != 'o')) ||
                    (((char)local_78[3] != 'p' || (*(char *)((long)local_78 + 0xd) != 'e')))) ||
                   (*(char *)((long)local_78 + 0xe) != 'r')))) ||
                 (((*(char *)((long)local_78 + 0xf) != 't' || ((char)local_78[4] != 'y')) ||
                  (*(char *)((long)local_78 + 0x11) != '\0')))))))) goto LAB_03f1faec;
            uVar13 = 7;
          }
        }
      }
      *(undefined4 *)(param_1 + 0x38) = uVar13;
    }
  }
LAB_03f1faec:
  local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
  uVar6 = FUN_03b36b40(param_3,&local_80,"Duration");
  if (((uVar6 & 1) == 0) || (local_80._4_1_ != -0x2e)) {
    local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
    uVar6 = FUN_03b36b40(param_3,&local_80,"Duration");
    if (((uVar6 & 1) != 0) && (local_80._4_1_ == -0x2f)) {
      *(float *)(param_1 + 0x3c) = (float)(int)(uint)local_80;
    }
  }
  else {
    *(uint *)(param_1 + 0x3c) = (uint)local_80;
  }
  local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
  uVar6 = FUN_03b36b40(param_3,&local_80,"StartOffset");
  if (((uVar6 & 1) == 0) || (local_80._4_1_ != -0x2e)) {
    local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
    uVar6 = FUN_03b36b40(param_3,&local_80,"StartOffset");
    if (((uVar6 & 1) != 0) && (local_80._4_1_ == -0x2f)) {
      *(float *)(param_1 + 0x40) = (float)(int)(uint)local_80;
    }
  }
  else {
    *(uint *)(param_1 + 0x40) = (uint)local_80;
  }
  local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
  uVar6 = FUN_03b36b40(param_3,&local_80,"FadeInTime");
  if (((uVar6 & 1) == 0) || (local_80._4_1_ != -0x2e)) {
    local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
    uVar6 = FUN_03b36b40(param_3,&local_80,"FadeInTime");
    if (((uVar6 & 1) != 0) && (local_80._4_1_ == -0x2f)) {
      *(float *)(param_1 + 0x48) = (float)(int)(uint)local_80;
    }
  }
  else {
    *(uint *)(param_1 + 0x48) = (uint)local_80;
  }
  local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
  uVar6 = FUN_03b36b40(param_3,&local_80,"FadeInType");
  if (((uVar6 & 1) != 0) && (local_80._4_1_ == -0x60)) {
    psVar18 = (short *)*param_3;
    uVar16 = *(uint *)(psVar18 + 4);
    uVar17 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if (*psVar18 != 0x5942) {
      uVar17 = uVar16;
    }
    if (uVar17 != 0) {
      uVar3 = *(uint *)((long)psVar18 + (long)(int)(uint)local_80 * 4 + (long)(int)uVar17 + 4);
      uVar16 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      uVar16 = uVar16 >> 0x10 | uVar16 << 0x10;
      if (*psVar18 != 0x5942) {
        uVar16 = uVar3;
      }
      local_78 = (uint *)((long)psVar18 + (ulong)uVar16 + (long)(int)uVar17);
      local_80 = &PTR_LAB_048f9770;
      FUN_03f15c38(param_1 + 0x4c,&local_80);
    }
  }
  local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
  uVar6 = FUN_03b36b40(param_3,&local_80,"FadeOutTime");
  if (((uVar6 & 1) == 0) || (local_80._4_1_ != -0x2e)) {
    local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
    uVar6 = FUN_03b36b40(param_3,&local_80,"FadeOutTime");
    if (((uVar6 & 1) != 0) && (local_80._4_1_ == -0x2f)) {
      *(float *)(param_1 + 0x54) = (float)(int)(uint)local_80;
    }
  }
  else {
    *(uint *)(param_1 + 0x54) = (uint)local_80;
  }
  local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
  uVar6 = FUN_03b36b40(param_3,&local_80,"FadeOutType");
  if (((uVar6 & 1) != 0) && (local_80._4_1_ == -0x60)) {
    psVar18 = (short *)*param_3;
    uVar16 = *(uint *)(psVar18 + 4);
    uVar17 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
    uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
    if (*psVar18 != 0x5942) {
      uVar17 = uVar16;
    }
    if (uVar17 != 0) {
      uVar3 = *(uint *)((long)psVar18 + (long)(int)(uint)local_80 * 4 + (long)(int)uVar17 + 4);
      uVar16 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      uVar16 = uVar16 >> 0x10 | uVar16 << 0x10;
      if (*psVar18 != 0x5942) {
        uVar16 = uVar3;
      }
      local_78 = (uint *)((long)psVar18 + (ulong)uVar16 + (long)(int)uVar17);
      local_80 = &PTR_LAB_048f9770;
      FUN_03f15c38(param_1 + 0x58,&local_80);
    }
  }
  local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
  uVar6 = FUN_03b36b40(param_3,&local_80,"NodeVolume");
  if (((uVar6 & 1) == 0) || (local_80._4_1_ != -0x2e)) {
    local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
    uVar6 = FUN_03b36b40(param_3,&local_80,"NodeVolume");
    if (((uVar6 & 1) != 0) && (local_80._4_1_ == -0x2f)) {
      iVar21 = (uint)local_80;
      lVar22 = *(long *)PTR_DAT_04bb2698;
      if (lVar22 == 0) {
        puVar14 = malloc(0x20);
      }
      else {
        plVar8 = param_2;
        if (param_2 == (long *)0x0) {
          lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar8 = (long *)(lVar22 + 8);
          if (lVar7 != 0) {
            plVar8 = (long *)(lVar7 + 0xa8);
          }
          plVar8 = (long *)*plVar8;
        }
        puVar14 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,0x20,8);
      }
      *(undefined4 *)(puVar14 + 1) = 9;
      puVar14[2] = 0;
      puVar14[3] = 0;
      *puVar14 = &PTR_LAB_04ba81a0;
      *(float *)(puVar14 + 2) = (float)iVar21;
      goto LAB_03f1ff94;
    }
    local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
    uVar6 = FUN_03b36b40(param_3,&local_80,"NodeVolume");
    if (((uVar6 & 1) != 0) && (local_80._4_1_ == -0x60)) {
      psVar18 = (short *)*param_3;
      uVar16 = *(uint *)(psVar18 + 4);
      uVar17 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
      uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
      if (*psVar18 != 0x5942) {
        uVar17 = uVar16;
      }
      if (uVar17 != 0) {
        uVar3 = *(uint *)((long)psVar18 + (long)(int)(uint)local_80 * 4 + (long)(int)uVar17 + 4);
        uVar16 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
        uVar16 = uVar16 >> 0x10 | uVar16 << 0x10;
        if (*psVar18 != 0x5942) {
          uVar16 = uVar3;
        }
        puVar14 = (undefined8 *)
                  FUN_03f20fd0(param_2,(long)psVar18 + (ulong)uVar16 + (long)(int)uVar17);
        goto LAB_03f1ff94;
      }
    }
  }
  else {
    uVar13 = (uint)local_80;
    lVar22 = *(long *)PTR_DAT_04bb2698;
    if (lVar22 == 0) {
      puVar14 = malloc(0x20);
    }
    else {
      plVar8 = param_2;
      if (param_2 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar8 = (long *)(lVar22 + 8);
        if (lVar7 != 0) {
          plVar8 = (long *)(lVar7 + 0xa8);
        }
        plVar8 = (long *)*plVar8;
      }
      puVar14 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,0x20,8);
    }
    puVar14[2] = 0;
    puVar14[3] = 0;
    *(undefined4 *)(puVar14 + 1) = 9;
    *puVar14 = &PTR_LAB_04ba81a0;
    *(undefined4 *)(puVar14 + 2) = uVar13;
LAB_03f1ff94:
    *(undefined8 **)(param_1 + 0x60) = puVar14;
  }
  local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
  uVar6 = FUN_03b36b40(param_3,&local_80,"SyncGroupHash");
  if (((uVar6 & 1) != 0) && (local_80._4_1_ != -1)) {
    uVar17 = (uint)local_80;
    if (local_80._4_1_ != -0x2d) {
      if (local_80._4_1_ != -0x2f) goto LAB_03f1ffe0;
      uVar17 = (uint)local_80 & ((int)(uint)local_80 >> 0x1f ^ 0xffffffffU);
    }
    *(uint *)(param_1 + 0x98) = uVar17;
  }
LAB_03f1ffe0:
  local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
  uVar6 = FUN_03b36b40(param_3,&local_80,"SpatializerHash");
  lVar22 = DAT_05ae7600;
  if (((uVar6 & 1) != 0) && (local_80._4_1_ != -1)) {
    iVar21 = (uint)local_80;
    if (((local_80._4_1_ == -0x2d) || ((local_80._4_1_ == -0x2f && (-1 < (int)(uint)local_80)))) &&
       ((uint)local_80 != 0)) {
      if (DAT_05ae7600 == 0) {
        puVar14 = malloc(0xf8);
      }
      else {
        plVar8 = param_2;
        if (param_2 == (long *)0x0) {
          lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar8 = (long *)(lVar22 + 8);
          if (lVar7 != 0) {
            plVar8 = (long *)(lVar7 + 0xa8);
          }
          plVar8 = (long *)*plVar8;
        }
        puVar14 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,0xf8,8);
      }
      uVar15 = *(undefined8 *)(param_4 + 8);
      *(undefined1 *)(puVar14 + 1) = 0;
      *(undefined4 *)(puVar14 + 2) = 0;
      puVar14[3] = 0;
      *(undefined4 *)(puVar14 + 4) = 0;
      puVar14[5] = 0;
      puVar14[6] = 0;
      *(undefined4 *)(puVar14 + 7) = 0x3f800000;
      *(undefined8 *)((long)puVar14 + 0x3c) = 0;
      *puVar14 = &PTR_LAB_04ba84a8;
      *(undefined4 *)((long)puVar14 + 0x44) = 0;
      *(undefined4 *)(puVar14 + 0xf) = 0x3f800000;
      puVar14[0xe] = &DAT_3f8000003f800000;
      puVar14[0x12] = 0;
      puVar14[0x16] = 0;
      *(undefined1 *)(puVar14 + 0x17) = 0;
      *(undefined4 *)(puVar14 + 0x1a) = 0;
      *(undefined8 *)((long)puVar14 + 0x7c) = 0;
      *(undefined8 *)((long)puVar14 + 0x84) = 0;
      *(undefined1 *)((long)puVar14 + 0x8c) = 0;
      *(int *)(puVar14 + 0x1d) = iVar21;
      puVar14[0x1e] = uVar15;
      puVar14[0x13] = 0;
      puVar14[0x14] = 0;
      puVar14[10] = &PTR_LAB_04b78128;
      puVar14[0xb] = &DAT_3f8000003f800000;
      puVar14[0xc] = 0x3f800000;
      puVar14[0xd] = &PTR_LAB_04b78128;
      *(undefined2 *)(puVar14 + 9) = 0xffff;
      puVar14[0x18] = 0;
      puVar14[0x19] = 0;
      puVar14[0x1b] = 0;
      puVar14[0x1c] = 0;
      *(undefined8 **)(param_1 + 0x68) = puVar14;
      FUN_03f238a0(puVar14,param_1,0x40,param_2);
      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x68);
    }
  }
  local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
  uVar6 = FUN_03b36b40(param_3,&local_80,"Volume");
  if (((uVar6 & 1) != 0) && (local_80._4_1_ - 0xc0 < 2)) {
    psVar18 = (short *)*param_3;
    puVar1 = (uint *)((long)psVar18 + ((ulong)local_80 & 0xffffffff));
    local_80 = (undefined **)psVar18;
    local_78 = puVar1;
    if ((psVar18 != (short *)0x0) && ((*puVar1 & 0xfe) == 0xc0)) {
      uVar17 = *puVar1 >> 8;
      if (*psVar18 == 0x5942) {
        uVar17 = uVar17 & 0xff00 | *puVar1 >> 0x18 | (uVar17 & 0xff) << 0x10;
      }
      if (uVar17 != 0) {
        lVar22 = *(long *)PTR_DAT_04bb2698;
        if (lVar22 == 0) {
          pvVar9 = malloc((ulong)(uVar17 << 3));
LAB_03f203b4:
          if (pvVar9 != (void *)0x0) {
            *(void **)(param_1 + 0x88) = pvVar9;
            *(undefined4 *)(param_1 + 0x80) = 0;
            *(uint *)(param_1 + 0x84) = uVar17;
          }
        }
        else {
          plVar8 = param_2;
          if (param_2 != (long *)0x0) {
LAB_03f20204:
            pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,(ulong)(uVar17 << 3),8);
            goto LAB_03f203b4;
          }
          lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar8 = (long *)(lVar22 + 8);
          if (lVar7 != 0) {
            plVar8 = (long *)(lVar7 + 0xa8);
          }
          plVar8 = (long *)*plVar8;
          if (plVar8 != (long *)0x0) goto LAB_03f20204;
        }
        lVar22 = 0;
        uVar6 = 0;
        do {
          local_68 = 0;
          if ((char)*puVar1 == -0x3f) {
            uVar16 = *puVar1 >> 8;
            sVar12 = *psVar18;
            if (sVar12 == 0x5942) {
              uVar16 = uVar16 & 0xff00 | *puVar1 >> 0x18 | (uVar16 & 0xff) << 0x10;
            }
            if (uVar16 == 0) goto LAB_03f20510;
            cVar4 = *(char *)((long)puVar1 + lVar22 + 7);
            uVar16 = *(uint *)((long)puVar1 + lVar22 + 8);
LAB_03f20498:
            uVar3 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
            uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
            if (sVar12 != 0x5942) {
              uVar3 = uVar16;
            }
            if (cVar4 != -0x2e) goto LAB_03f20510;
            lVar7 = *(long *)PTR_DAT_04bb2698;
            if (lVar7 == 0) {
              puVar14 = malloc(0x20);
            }
            else {
              plVar8 = param_2;
              if (param_2 == (long *)0x0) {
                lVar10 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
                plVar8 = (long *)(lVar7 + 8);
                if (lVar10 != 0) {
                  plVar8 = (long *)(lVar10 + 0xa8);
                }
                plVar8 = (long *)*plVar8;
              }
              puVar14 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,0x20,8);
            }
            puVar14[2] = 0;
            puVar14[3] = 0;
            *(undefined4 *)(puVar14 + 1) = 9;
            *puVar14 = &PTR_LAB_04ba81a0;
            *(uint *)(puVar14 + 2) = uVar3;
LAB_03f20560:
            if (*(int *)(param_1 + 0x80) < *(int *)(param_1 + 0x84)) {
              *(undefined8 **)(*(long *)(param_1 + 0x88) + (long)*(int *)(param_1 + 0x80) * 8) =
                   puVar14;
              *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
            }
          }
          else {
            if ((char)*puVar1 == -0x40) {
              sVar12 = *psVar18;
              uVar19 = (ulong)(*puVar1 >> 8);
              if (sVar12 == 0x5942) {
                uVar19 = uVar19 & 0xff00 | (ulong)(*puVar1 >> 0x18) | (uVar19 & 0xff) << 0x10;
              }
              if (uVar6 < uVar19) {
                cVar4 = *(char *)((long)puVar1 + uVar6 + 4);
                uVar16 = *(uint *)((long)puVar1 +
                                  uVar6 * 4 + ((ulong)((int)uVar19 + 3) & 0x1fffffc) + 4);
                goto LAB_03f20498;
              }
            }
LAB_03f20510:
            uVar19 = FUN_03b36de8(&local_80,&local_68,uVar6 & 0xffffffff);
            if ((uVar19 & 1) != 0) {
              puVar14 = (undefined8 *)FUN_03f20fd0(param_2,local_68);
              goto LAB_03f20560;
            }
          }
          uVar6 = uVar6 + 1;
          lVar22 = lVar22 + 8;
        } while (uVar17 != uVar6);
      }
    }
  }
  local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
  uVar6 = FUN_03b36b40(param_3,&local_80,"TargetProperty");
  if ((uVar6 & 1) == 0) {
    return 1;
  }
  if (local_80._4_1_ != -0x60) {
    return 1;
  }
  psVar18 = (short *)*param_3;
  uVar16 = *(uint *)(psVar18 + 4);
  uVar17 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
  uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
  if (*psVar18 != 0x5942) {
    uVar17 = uVar16;
  }
  if (uVar17 == 0) {
    return 1;
  }
  lVar7 = (long)(int)uVar17;
  lVar22 = 0;
  uVar16 = *(uint *)((long)psVar18 + (long)(int)(uint)local_80 * 4 + lVar7 + 4);
  uVar17 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
  uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
  if (*psVar18 != 0x5942) {
    uVar17 = uVar16;
  }
  uVar6 = (ulong)uVar17;
  pcVar2 = (char *)((long)psVar18 + uVar6 + lVar7);
  lVar10 = uVar6 + lVar7 + 1;
  do {
    lVar5 = lVar22 + lVar10;
    if (*(char *)((long)psVar18 + lVar5 + -1) == '\0') {
LAB_03f202e0:
      iVar21 = (int)lVar22;
joined_r0x03f202e4:
      if (1 < iVar21) {
        lVar22 = 0;
        lVar10 = lVar7 + uVar6 + 1;
        goto LAB_03f20310;
      }
      break;
    }
    if (*(char *)((long)psVar18 + lVar22 + lVar10) == '\0') {
      lVar22 = lVar22 + 1;
      goto LAB_03f202e0;
    }
    if (*(char *)((long)psVar18 + lVar5 + 1) == '\0') {
      iVar21 = (int)lVar22 + 2;
      goto joined_r0x03f202e4;
    }
    lVar22 = lVar22 + 3;
  } while (lVar22 != 0x80001);
LAB_03f206a8:
  *(undefined8 *)(param_1 + 0xa8) = param_5;
  return 1;
  while( true ) {
    if (*(char *)((long)psVar18 + lVar22 + lVar10) == '\0') {
      lVar22 = lVar22 + 1;
      goto LAB_03f2034c;
    }
    if (*(char *)((long)psVar18 + lVar5 + 1) == '\0') {
      lVar22 = lVar22 + 2;
      goto LAB_03f2034c;
    }
    lVar22 = lVar22 + 3;
    if (lVar22 == 0x80001) break;
LAB_03f20310:
    lVar5 = lVar22 + lVar10;
    pcVar20 = pcVar2;
    if (*(char *)((long)psVar18 + lVar5 + -1) == '\0') {
LAB_03f2034c:
      if ((int)lVar22 < 0) {
        pcVar20 = PTR_DAT_04bb2120;
      }
      break;
    }
  }
  if (*pcVar20 == '$') {
    lVar22 = 0;
    lVar7 = lVar7 + uVar6 + 1;
    do {
      lVar10 = lVar22 + lVar7;
      if (*(char *)((long)psVar18 + lVar10 + -1) == '\0') {
LAB_03f20590:
        if (0 < (int)lVar22) {
          local_78 = (uint *)(pcVar2 + 1);
          goto LAB_03f205ac;
        }
        break;
      }
      if (*(char *)((long)psVar18 + lVar22 + lVar7) == '\0') {
        lVar22 = lVar22 + 1;
        goto LAB_03f20590;
      }
      if (*(char *)((long)psVar18 + lVar10 + 1) == '\0') {
        lVar22 = lVar22 + 2;
        goto LAB_03f20590;
      }
      lVar22 = lVar22 + 3;
    } while (lVar22 != 0x80001);
    local_78 = (uint *)PTR_DAT_04c4b988;
LAB_03f205ac:
    local_80 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    FUN_038d30c0(param_1 + 0x9c,&local_80,0xffffffff);
    local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
    uVar6 = FUN_03b36b40(param_3,&local_80,"Value");
    if (((uVar6 & 1) == 0) || (local_80._4_1_ != -0x2e)) {
      local_80 = (undefined **)((ulong)local_80 & 0xffffff0000000000);
      uVar6 = FUN_03b36b40(param_3,&local_80,"Value");
      if (((uVar6 & 1) == 0) || (local_80._4_1_ != -0x2f)) goto LAB_03f206a8;
      uVar13 = (uint)local_80;
      puVar11 = (undefined4 *)FUN_038aa4a0(4,param_2,8);
      *puVar11 = uVar13;
    }
    else {
      uVar13 = (uint)local_80;
      lVar22 = *(long *)PTR_DAT_04bb2698;
      if (lVar22 == 0) {
        puVar11 = malloc(4);
      }
      else {
        if (param_2 == (long *)0x0) {
          lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          param_2 = (long *)(lVar22 + 8);
          if (lVar7 != 0) {
            param_2 = (long *)(lVar7 + 0xa8);
          }
          param_2 = (long *)*param_2;
        }
        puVar11 = (undefined4 *)(**(code **)(*param_2 + 0x30))(param_2,4,8);
      }
      *puVar11 = uVar13;
    }
    *(undefined4 **)(param_1 + 0xa0) = puVar11;
  }
  goto LAB_03f206a8;
}

