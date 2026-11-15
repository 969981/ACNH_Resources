
/* WARNING: Removing unreachable block (ram,0x02449044) */

void FUN_02448e70(long param_1)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  uint uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined8 local_50;
  char *local_48;
  int local_24;
  
  cVar1 = *(char *)(param_1 + 0x191b);
  if (*(int *)(param_1 + 0x1810) == 4) {
    local_50 = (undefined *)
               CONCAT44((float)(int)*(short *)(param_1 + 0x18e9) * 0.25,
                        (float)*(int *)(param_1 + 0x18e5) * 0.001);
    local_48 = (char *)CONCAT44(local_48._4_4_,(float)*(int *)(param_1 + 0x18eb) * 0.001);
    FUN_016f84f0(param_1,&local_50);
  }
  if (*(int *)(param_1 + 0x1900) == 0) {
LAB_02448f50:
    FUN_023164ec(param_1,6);
    if (*(char *)(param_1 + 0x191a) == '\0') goto LAB_02448fe4;
LAB_02448f64:
    puVar10 = *(undefined8 **)(param_1 + 0x60);
    if (puVar10 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar10 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar10 = &DAT_05240280;
      }
    }
    local_50 = PTR_DAT_04bb2020 + 0x10;
    local_48 = "MaReWorried";
    FUN_01707310(puVar10,&local_50,0,6,0);
    FUN_01707750(puVar10,&local_50);
    puVar10 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    local_24 = *(int *)(param_1 + 0x1900);
    FUN_0171ed40(&local_24);
    FUN_0171ea90(&local_50);
    if (*local_48 == '\0') goto LAB_02448f50;
    cVar2 = *(char *)(param_1 + 0x191c);
    puVar10 = *(undefined8 **)(param_1 + 0x60);
    if (puVar10 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar10 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar10 = &DAT_05240280;
      }
    }
    FUN_017081d0(puVar10,&local_50,6,cVar2 != '\0',0);
    if (*(char *)(param_1 + 0x191a) != '\0') goto LAB_02448f64;
LAB_02448fe4:
    puVar10 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar10 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar10 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  lVar7 = puVar10[0x227];
  if (lVar7 == 0) {
    local_50 = (undefined *)((ulong)local_50._4_4_ << 0x20);
    plVar11 = &DAT_04c931a0;
  }
  else {
    uVar12 = *(uint *)(puVar10 + 0x2d3) >> 1 & 1;
    local_50 = (undefined *)
               (CONCAT44(local_50._4_4_,*(uint *)(puVar10 + 0x2d3) >> 1) & 0xffffffff00000001);
    uVar8 = 0;
    if (*(long *)(lVar7 + 0x78) != 0) {
      uVar8 = *(uint *)(*(long *)(lVar7 + 0x78) + 0x18);
    }
    if (uVar8 <= uVar12) {
      uVar12 = 0;
    }
    if (*(uint *)(lVar7 + 0x80) <= uVar12) {
      uVar12 = 0;
    }
    plVar11 = (long *)(*(long *)(lVar7 + 0x88) + (long)(int)uVar12 * 0xe8 + 0x60);
  }
  (**(code **)(*plVar11 + 0x18))(plVar11);
  (**(code **)(*plVar11 + 0x18))(plVar11);
  if ((char *)plVar11[1] == "PlayerComplete") {
LAB_024490f4:
    FUN_02332994(param_1);
  }
  else {
    uVar9 = 0;
    bVar4 = true;
    do {
      cVar2 = ((char *)plVar11[1])[uVar9];
      if (cVar2 != "PlayerComplete"[uVar9]) break;
      if (cVar2 == '\0') {
        if (bVar4) goto LAB_024490f4;
        break;
      }
      bVar4 = uVar9 < 0x80000;
      uVar9 = uVar9 + 1;
    } while (uVar9 != 0x80001);
  }
  if (cVar1 == '\0') {
    if (**(char **)(param_1 + 0x9f0) != '\0' && *(int *)(param_1 + 0x178) == 0) {
      if ((*(uint *)(param_1 + 0x1da8) & 0xfffffffd) == 4) {
        puVar10 = *(undefined8 **)(param_1 + 0x1dc0);
        *(undefined4 *)(param_1 + 0x1da8) = 0;
        *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffffffd;
        if (puVar10 != &DAT_0407ebb1) {
          iVar5 = 0;
          if (*(int *)(param_1 + 0x1dc8) < 1) {
            iVar5 = *(int *)(param_1 + 0x1dc8) + -1;
          }
          memset(puVar10,0,(long)iVar5);
          *(undefined1 *)((long)puVar10 + (long)iVar5) = 0;
        }
        puVar10 = *(undefined8 **)(param_1 + 0x1e18);
        if (puVar10 != &DAT_0407ebb1) {
          iVar5 = 0;
          if (*(int *)(param_1 + 0x1e20) < 1) {
            iVar5 = *(int *)(param_1 + 0x1e20) + -1;
          }
          memset(puVar10,0,(long)iVar5);
          *(undefined1 *)((long)puVar10 + (long)iVar5) = 0;
        }
        *(undefined8 *)(param_1 + 0x1e68) = 0;
        *(undefined2 *)(param_1 + 0x1e70) = 0xff;
        *(undefined8 *)(param_1 + 0x1e78) = 0;
      }
      *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffffffb;
    }
    *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) & 0xfffffffb;
  }
  lVar7 = *(long *)(param_1 + 0x60);
  if (lVar7 != 0) {
    *(undefined4 *)(lVar7 + 0x12d0) = 0;
    *(undefined1 *)(lVar7 + 0x142d) = 0;
    **(undefined1 **)(lVar7 + 0x12e0) = 0;
    *(undefined4 *)(lVar7 + 0x1330) = 0xffffffff;
    *(undefined4 *)(lVar7 + 0x1428) = 0;
    *(undefined8 *)(lVar7 + 0x1334) = 0;
    *(undefined8 *)(lVar7 + 0x133c) = 0;
    *(undefined4 *)(lVar7 + 0x1344) = 0;
  }
  uVar12 = *(uint *)(param_1 + 0xa9c);
  *(undefined8 *)(param_1 + 0x9e0) = 0;
  *(undefined8 *)(param_1 + 0x9d8) = 0;
  puVar3 = PTR_DAT_04bb27c0;
  if ((uVar12 == 0) || (lVar7 = *(long *)PTR_DAT_04bb27c0, lVar7 == 0)) goto LAB_02449354;
  plVar11 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + ((ulong)(uVar12 >> 0x11) & 0x7ff8))
  ;
  if ((plVar11 == (long *)0x0) ||
     (((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar11 + 0x46) != uVar12)))) {
    plVar11 = (long *)0x0;
  }
  if ((*(int *)(lVar7 + 0x288) == 1) || (*(int *)(lVar7 + 0x288) == -1)) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar12 = 1;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_024492bc;
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_024492bc:
    uVar12 = 0;
  }
  if (plVar11 != (long *)0x0) {
    lVar7 = plVar11[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar9 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb37d0);
    uVar8 = 0;
    if ((int)lVar7 == 1) {
      uVar8 = uVar12;
    }
    if ((((uVar9 & 1) != 0) && (uVar8 != 0)) && (lVar7 = plVar11[0x76], lVar7 != 0)) {
      local_50 = (undefined *)((ulong)local_50 & 0xffffffff00000000);
      local_24 = 0;
      FUN_01e5a930(0x40000000,lVar7,0xc,PTR_DAT_04bb2150,&local_50,&local_24,PTR_DAT_04bc1600,6);
      *(undefined4 *)(lVar7 + 0x3ac) = 1;
    }
  }
LAB_02449354:
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar12 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar7 + 0x278) * 999.99994);
    iVar5 = (int)(*(float *)(lVar7 + 0x27c) * 4.0);
    if (0x7ffe < iVar5) {
      iVar5 = 0x7fff;
    }
    if (iVar5 < -0x7fff) {
      iVar5 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar5;
    fVar13 = *(float *)(lVar7 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar13 * 999.99994);
    uVar12 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar12;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar10 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar10 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar14 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar10 + 0x2ec) = uVar14;
    *(undefined1 *)((long)puVar10 + 0x2e5) = 1;
  }
  if (*(char *)(param_1 + 0xac1) != '\0') {
    FUN_02332b04(param_1,0,0);
  }
  return;
}

