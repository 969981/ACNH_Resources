
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0232bc30(long param_1)

{
  long *plVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined2 uVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  long *plVar13;
  byte bVar14;
  byte bVar15;
  undefined8 *puVar16;
  void *__dest;
  void *__src;
  undefined *local_50;
  undefined *puStack_48;
  
  puVar6 = PTR_DAT_04bb4718;
  puVar5 = PTR_DAT_04bb39b0;
  lVar10 = *(long *)PTR_DAT_04bb39b0;
  if (*(int *)(param_1 + 0x178) == 0) {
    pbVar2 = (byte *)(param_1 + 0x1ee8);
    if ((lVar10 != 0) && (*(int *)(lVar10 + 0x15c) != 0)) {
      pbVar3 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar10 + 0x15c) != 0) {
        pbVar3 = (byte *)(lVar10 + 0x158);
      }
      bVar15 = *pbVar2;
      bVar14 = *pbVar3;
      if (7 < bVar14) {
        bVar14 = 0xff;
      }
      if (7 < bVar15) {
        bVar15 = 0xff;
      }
      if (bVar14 != bVar15) goto LAB_0232bc60;
    }
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(&DAT_054f0960);
        if (iVar8 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
        puVar16 = &DAT_054f0958;
      }
      else {
        puVar16 = &DAT_054f0958;
      }
    }
    else {
      puVar16 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
      if ((ulong)*pbVar2 < 8) {
        puVar16 = puVar16 + *pbVar2;
      }
    }
    local_50._0_4_ = 0x23;
    if ((*(uint *)((long)puVar16 + 4) >> 3 & 1) != 0) {
      return 0;
    }
    if (*(long *)puVar6 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(&DAT_054f0960);
        puVar16 = &DAT_054f0958;
        if (iVar8 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar16 = &DAT_054f0958;
      }
    }
    else {
      puVar16 = (undefined8 *)(*(long *)puVar6 + 0x204);
      if ((ulong)*pbVar2 < 8) {
        puVar16 = puVar16 + *pbVar2;
      }
    }
    local_50 = (undefined *)CONCAT44(local_50._4_4_,0x23);
    *(uint *)((long)puVar16 + 4) = *(uint *)((long)puVar16 + 4) | 8;
    puVar6 = PTR_DAT_04bb26a8;
    if ((*(long *)puVar5 == 0) || (*(int *)(*(long *)puVar5 + 0x15c) == 0)) {
      lVar11 = *(long *)PTR_DAT_04bb26a8;
      local_50 = PTR_DAT_04bb2020 + 0x10;
      puStack_48 = &DAT_040c0bec;
      lVar10 = *(long *)(lVar11 + 0x19f840);
joined_r0x0232bf04:
      do {
        if (lVar10 == 0) {
          uVar9 = 0xffff;
LAB_0232c084:
          FUN_02a0d880(lVar11 + 0xa7660,uVar9);
          (**(code **)(DAT_05491770 + 0x18))(&DAT_05491770);
          uVar7 = FUN_006bd550(DAT_05491778,0);
          lVar10 = *(long *)puVar6;
          plVar1 = (long *)(lVar10 + 0xb3b78);
          nn::os::LockMutex((MutexType *)(lVar10 + 0xb3b58));
          if (*(int *)(lVar10 + 0xb3b88) < *(int *)(lVar10 + 0xb3ba0)) {
            puVar16 = *(undefined8 **)(lVar10 + 0xb3b90);
            if (puVar16 != (undefined8 *)0x0) {
              *(undefined8 *)(lVar10 + 0xb3b90) = *puVar16;
            }
            *(undefined2 *)puVar16 = 0;
            plVar13 = puVar16 + 2;
            *plVar13 = 0;
            *(undefined1 *)((long)puVar16 + 2) = 0;
            *(undefined4 *)((long)puVar16 + 4) = uVar7;
            *(undefined4 *)(puVar16 + 1) = 0x3f800000;
            puVar16[3] = 0;
            lVar11 = *plVar1;
            *plVar1 = (long)plVar13;
            puVar16[3] = plVar1;
            *plVar13 = lVar11;
            if (lVar11 != 0) {
              *(long **)(lVar11 + 8) = plVar13;
            }
            *(int *)(lVar10 + 0xb3b88) = *(int *)(lVar10 + 0xb3b88) + 1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar10 + 0xb3b58));
          return 1;
        }
        iVar8 = FUN_029ca720(&local_50,lVar10 + 0x20);
        if (-1 < iVar8) {
          if (iVar8 == 0) {
            uVar9 = *(undefined2 *)(lVar10 + 0x30);
            goto LAB_0232c084;
          }
          lVar10 = *(long *)(lVar10 + 0x10);
          goto joined_r0x0232bf04;
        }
        lVar10 = *(long *)(lVar10 + 8);
      } while( true );
    }
    puVar16 = *(undefined8 **)(param_1 + 0x60);
    if (puVar16 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(&DAT_052461c0);
        puVar16 = &DAT_05240280;
        if (iVar8 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar16 = &DAT_05240280;
      }
    }
    puVar5 = PTR_DAT_04bb2118;
    pcVar12 = (char *)(puVar16 + 0xb9e);
    if (*pcVar12 == '\0') {
      lVar10 = 0;
    }
    else {
      pcVar12 = (char *)(puVar16 + 0xbae);
      if (*pcVar12 == '\0') {
        lVar10 = 1;
      }
      else if (*(char *)(puVar16 + 0xbbe) == '\0') {
        pcVar12 = (char *)(puVar16 + 0xbbe);
        lVar10 = 2;
      }
      else {
        if (*(char *)(puVar16 + 0xbce) != '\0') {
          return 1;
        }
        pcVar12 = (char *)(puVar16 + 0xbce);
        lVar10 = 3;
      }
    }
    puVar16 = puVar16 + lVar10 * 0x10 + 0xb8f;
    *pcVar12 = '\x01';
    __dest = (void *)puVar16[1];
    *(int *)((long)puVar16 + 0x7c) = (int)*(undefined8 *)(*(long *)puVar5 + 0x508);
    (**(code **)(DAT_05491790 + 0x18))(&DAT_05491790);
    __src = DAT_05491798;
    if (__dest == DAT_05491798) goto LAB_0232c230;
    (**(code **)(DAT_05491790 + 0x18))(&DAT_05491790);
    lVar10 = 0;
    do {
      if (*(char *)((long)DAT_05491798 + lVar10) == '\0') goto LAB_0232c208;
      if (*(char *)((long)DAT_05491798 + lVar10 + 1) == '\0') goto LAB_0232c1fc;
      if (*(char *)((long)DAT_05491798 + lVar10 + 2) == '\0') goto LAB_0232c204;
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
  }
  else {
    if (lVar10 == 0) {
LAB_0232bc78:
      bVar4 = false;
      puVar16 = *(undefined8 **)(param_1 + 0x60);
    }
    else {
LAB_0232bc60:
      if (*(int *)(lVar10 + 0x15c) == 0) goto LAB_0232bc78;
      bVar4 = true;
      puVar16 = *(undefined8 **)(param_1 + 0x60);
    }
    if (puVar16 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(&DAT_052461c0);
        puVar16 = &DAT_05240280;
        if (iVar8 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar16 = &DAT_05240280;
      }
    }
    puVar5 = PTR_DAT_04bb2118;
    pcVar12 = (char *)(puVar16 + 0xb9e);
    if (bVar4) {
      if (*pcVar12 == '\0') {
        lVar10 = 0;
      }
      else {
        pcVar12 = (char *)(puVar16 + 0xbae);
        if (*pcVar12 == '\0') {
          lVar10 = 1;
        }
        else if (*(char *)(puVar16 + 0xbbe) == '\0') {
          pcVar12 = (char *)(puVar16 + 0xbbe);
          lVar10 = 2;
        }
        else {
          if (*(char *)(puVar16 + 0xbce) != '\0') {
            return 1;
          }
          pcVar12 = (char *)(puVar16 + 0xbce);
          lVar10 = 3;
        }
      }
      puVar16 = puVar16 + lVar10 * 0x10 + 0xb8f;
      *pcVar12 = '\x01';
      __dest = (void *)puVar16[1];
      *(int *)((long)puVar16 + 0x7c) = (int)*(undefined8 *)(*(long *)puVar5 + 0x508);
      (**(code **)(DAT_05491790 + 0x18))(&DAT_05491790);
      __src = DAT_05491798;
      if (__dest == DAT_05491798) goto LAB_0232c230;
      (**(code **)(DAT_05491790 + 0x18))(&DAT_05491790);
      lVar10 = 0;
      do {
        if (*(char *)((long)DAT_05491798 + lVar10) == '\0') goto LAB_0232c208;
        if (*(char *)((long)DAT_05491798 + lVar10 + 1) == '\0') goto LAB_0232c1fc;
        if (*(char *)((long)DAT_05491798 + lVar10 + 2) == '\0') goto LAB_0232c204;
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
    }
    else {
      if (*pcVar12 == '\0') {
        lVar10 = 0;
      }
      else {
        pcVar12 = (char *)(puVar16 + 0xbae);
        if (*pcVar12 == '\0') {
          lVar10 = 1;
        }
        else if (*(char *)(puVar16 + 0xbbe) == '\0') {
          pcVar12 = (char *)(puVar16 + 0xbbe);
          lVar10 = 2;
        }
        else {
          if (*(char *)(puVar16 + 0xbce) != '\0') {
            return 1;
          }
          pcVar12 = (char *)(puVar16 + 0xbce);
          lVar10 = 3;
        }
      }
      puVar16 = puVar16 + lVar10 * 0x10 + 0xb8f;
      *pcVar12 = '\x01';
      __dest = (void *)puVar16[1];
      *(int *)((long)puVar16 + 0x7c) = (int)*(undefined8 *)(*(long *)puVar5 + 0x508);
      (**(code **)(DAT_054917a0 + 0x18))(&DAT_054917a0);
      __src = DAT_054917a8;
      if (__dest == DAT_054917a8) goto LAB_0232c230;
      (**(code **)(DAT_054917a0 + 0x18))(&DAT_054917a0);
      lVar10 = 0;
      do {
        if (*(char *)((long)DAT_054917a8 + lVar10) == '\0') goto LAB_0232c208;
        if (*(char *)((long)DAT_054917a8 + lVar10 + 1) == '\0') goto LAB_0232c1fc;
        if (*(char *)((long)DAT_054917a8 + lVar10 + 2) == '\0') goto LAB_0232c204;
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
    }
  }
  lVar10 = 0;
  goto LAB_0232c208;
LAB_0232c1fc:
  lVar10 = lVar10 + 1;
  goto LAB_0232c208;
LAB_0232c204:
  lVar10 = lVar10 + 2;
LAB_0232c208:
  iVar8 = (int)lVar10;
  if (*(int *)(puVar16 + 2) <= (int)lVar10) {
    iVar8 = *(int *)(puVar16 + 2) + -1;
  }
  memcpy(__dest,__src,(long)iVar8);
  *(undefined1 *)((long)__dest + (long)iVar8) = 0;
LAB_0232c230:
  *(undefined4 *)(puVar16 + 0xe) = 0;
  return 1;
}

