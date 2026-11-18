
/* WARNING: Removing unreachable block (ram,0x03300b9c) */
/* WARNING: Removing unreachable block (ram,0x03300f08) */
/* WARNING: Removing unreachable block (ram,0x03300e28) */
/* WARNING: Removing unreachable block (ram,0x03300984) */
/* WARNING: Removing unreachable block (ram,0x03300aa0) */

void FUN_033008cc(long param_1,uint param_2,uint param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined8 *puVar2;
  char *pcVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  void *pvVar11;
  
  pcVar1 = (char *)(param_1 + 0x16408);
  pcVar3 = (char *)(param_1 + 0x106a);
  switch(param_2) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x17:
  case 0x18:
  case 0x19:
    lVar8 = *(long *)(param_1 + 0x4f8);
    if (lVar8 == 0) {
      puVar2 = (undefined8 *)(param_1 + 0x4e0);
      if (((*(long *)(param_1 + 0x520) != 0) && (*(int *)(param_1 + 0x1050) != 1)) &&
         ((*pcVar3 != '\0' || ((*pcVar1 != '\0' && (*(int *)(param_1 + 0x1568) == 0)))))) {
        *(undefined1 *)(*(long *)(param_1 + 0x520) + 0x177e) = 1;
      }
      plVar7 = (long *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,7000,8);
      FUN_03319ffc(plVar7,puVar2);
      *plVar7 = (long)(PTR_DAT_04bc9728 + 0x10);
      memset(plVar7 + 0x2fe,0,0x338);
      *(undefined1 *)((long)plVar7 + 0x1b34) = 0;
      plVar7[0x368] = 0;
      *(undefined1 *)(plVar7 + 0x369) = 0;
      *(undefined4 *)((long)plVar7 + 0x1b54) = 0;
      plVar7[0x365] = 0x100000002;
      *(undefined4 *)(plVar7 + 0x366) = 3;
      *(undefined4 *)(plVar7 + 0x367) = 0xd;
      *(undefined8 *)((long)plVar7 + 0x1b4c) = 0;
      pvVar11 = *(void **)(param_1 + 0x4f8);
      *(long **)(param_1 + 0x4f8) = plVar7;
      if (pvVar11 != (void *)0x0) {
        FUN_0332d770(pvVar11);
        if (DAT_05ae7600 == 0) {
          free(pvVar11);
        }
        else {
          plVar7 = (long *)FUN_038cb610(DAT_05ae7600,pvVar11);
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x38))(plVar7,pvVar11);
          }
        }
        plVar7 = *(long **)(param_1 + 0x4f8);
      }
      plVar7[0x72] = *(long *)(param_1 + 0x17e8);
      *(undefined8 *)(*(long *)(param_1 + 0x4f8) + 0x398) = *(undefined8 *)(param_1 + 0x17f0);
      lVar8 = *(long *)(param_1 + 0x4f8);
      uVar10 = *(undefined8 *)(param_1 + 0x528);
      *(undefined8 *)(lVar8 + 0x310) = *(undefined8 *)(param_1 + 0x520);
      *(undefined8 *)(lVar8 + 0x318) = uVar10;
      *(long *)(*(long *)(param_1 + 0x4f8) + 8) = param_1 + 0x6e8;
      FUN_0331fcf0(*(undefined8 *)(param_1 + 0x4f8),puVar2);
      lVar8 = *(long *)(param_1 + 0x4f8);
      if (*(long *)(lVar8 + 800) != 0) {
        FUN_03285190(*(undefined4 *)(param_1 + 0x1641c));
        lVar8 = *(long *)(param_1 + 0x4f8);
      }
    }
    break;
  case 0xe:
  case 0xf:
  case 0x10:
    lVar8 = *(long *)(param_1 + 0x4f0);
    if (lVar8 == 0) {
      puVar2 = (undefined8 *)(param_1 + 0x4e0);
      if (((*(long *)(param_1 + 0x520) != 0) && (*(int *)(param_1 + 0x1050) != 1)) &&
         ((*pcVar3 != '\0' || ((*pcVar1 != '\0' && (*(int *)(param_1 + 0x1568) == 0)))))) {
        *(undefined1 *)(*(long *)(param_1 + 0x520) + 0x177e) = 1;
      }
      plVar7 = (long *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x1c08,8);
      FUN_03319ffc(plVar7,puVar2);
      puVar6 = PTR_DAT_04bc9700;
      plVar7[0x33c] = 0;
      *(undefined4 *)(plVar7 + 0x33d) = 0;
      plVar7[0x33e] = 0;
      *(undefined1 *)(plVar7 + 0x33f) = 0;
      plVar7[0x37e] = 0;
      *(undefined1 *)(plVar7 + 0x37f) = 0;
      *plVar7 = (long)(puVar6 + 0x10);
      *(undefined8 *)((long)plVar7 + 0x1bfc) = 0;
      memset(plVar7 + 0x340,0,0x1ec);
      memset(plVar7 + 0x2fe,0,0x1ec);
      pvVar11 = *(void **)(param_1 + 0x4f0);
      *(long **)(param_1 + 0x4f0) = plVar7;
      if (pvVar11 != (void *)0x0) {
        FUN_033081e0(pvVar11);
        if (DAT_05ae7600 == 0) {
          free(pvVar11);
        }
        else {
          plVar7 = (long *)FUN_038cb610(DAT_05ae7600,pvVar11);
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x38))(plVar7,pvVar11);
          }
        }
        plVar7 = *(long **)(param_1 + 0x4f0);
      }
      plVar7[0x72] = *(long *)(param_1 + 0x17e8);
      *(undefined8 *)(*(long *)(param_1 + 0x4f0) + 0x398) = *(undefined8 *)(param_1 + 0x17f0);
      lVar8 = *(long *)(param_1 + 0x4f0);
      uVar10 = *(undefined8 *)(param_1 + 0x528);
      *(undefined8 *)(lVar8 + 0x310) = *(undefined8 *)(param_1 + 0x520);
      *(undefined8 *)(lVar8 + 0x318) = uVar10;
      *(long *)(*(long *)(param_1 + 0x4f0) + 8) = param_1 + 0x6e8;
      FUN_0331fcf0(*(undefined8 *)(param_1 + 0x4f0),puVar2);
      lVar8 = *(long *)(param_1 + 0x4f0);
      if (*(long *)(lVar8 + 800) != 0) {
        FUN_03285190(*(undefined4 *)(param_1 + 0x1641c));
        lVar8 = *(long *)(param_1 + 0x4f0);
      }
    }
    break;
  case 0x11:
    lVar8 = *(long *)(param_1 + 0x500);
    if (lVar8 == 0) {
      puVar2 = (undefined8 *)(param_1 + 0x4e0);
      if (((*(long *)(param_1 + 0x520) != 0) && (*(int *)(param_1 + 0x1050) != 1)) &&
         ((*pcVar3 != '\0' || ((*pcVar1 != '\0' && (*(int *)(param_1 + 0x1568) == 0)))))) {
        *(undefined1 *)(*(long *)(param_1 + 0x520) + 0x177e) = 1;
      }
      plVar7 = (long *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x1b98,8);
      FUN_03319ffc(plVar7,puVar2);
      *plVar7 = (long)(PTR_DAT_04bc9730 + 0x10);
      memset(plVar7 + 0x2fe,0,0x3a4);
      pvVar11 = *(void **)(param_1 + 0x500);
      *(long **)(param_1 + 0x500) = plVar7;
      if (pvVar11 != (void *)0x0) {
        FUN_0333abc0(pvVar11);
        if (DAT_05ae7600 == 0) {
          free(pvVar11);
        }
        else {
          plVar7 = (long *)FUN_038cb610(DAT_05ae7600,pvVar11);
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x38))(plVar7,pvVar11);
          }
        }
        plVar7 = *(long **)(param_1 + 0x500);
      }
      plVar7[0x72] = *(long *)(param_1 + 0x17e8);
      *(undefined8 *)(*(long *)(param_1 + 0x500) + 0x398) = *(undefined8 *)(param_1 + 0x17f0);
      lVar8 = *(long *)(param_1 + 0x500);
      uVar10 = *(undefined8 *)(param_1 + 0x528);
      *(undefined8 *)(lVar8 + 0x310) = *(undefined8 *)(param_1 + 0x520);
      *(undefined8 *)(lVar8 + 0x318) = uVar10;
      *(long *)(*(long *)(param_1 + 0x500) + 8) = param_1 + 0x6e8;
      FUN_0331fcf0(*(undefined8 *)(param_1 + 0x500),puVar2);
      lVar8 = *(long *)(param_1 + 0x500);
      if (*(long *)(lVar8 + 800) != 0) {
        FUN_03285190(*(undefined4 *)(param_1 + 0x1641c));
        lVar8 = *(long *)(param_1 + 0x500);
      }
    }
    break;
  case 0x12:
    lVar8 = *(long *)(param_1 + 0x508);
    if (lVar8 == 0) {
      puVar2 = (undefined8 *)(param_1 + 0x4e0);
      if (((*(long *)(param_1 + 0x520) != 0) && (*(int *)(param_1 + 0x1050) != 1)) &&
         ((*pcVar3 != '\0' || ((*pcVar1 != '\0' && (*(int *)(param_1 + 0x1568) == 0)))))) {
        *(undefined1 *)(*(long *)(param_1 + 0x520) + 0x177e) = 1;
      }
      puVar9 = (undefined8 *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x18d0,8);
      FUN_03319ffc(puVar9,puVar2);
      puVar9[0x311] = 0;
      *(undefined1 *)(puVar9 + 0x310) = 0;
      puVar9[0x30c] = 0;
      puVar9[0x30d] = 0;
      puVar9[0x30e] = 0;
      puVar9[0x30f] = 0;
      puVar9[0x2fe] = 0;
      puVar9[0x2ff] = 0;
      puVar9[0x300] = 0;
      puVar9[0x301] = 0;
      puVar9[0x302] = 0;
      puVar9[0x303] = 0;
      puVar9[0x304] = 0;
      puVar9[0x305] = 0;
      puVar9[0x306] = 0;
      puVar9[0x307] = 0;
      puVar9[0x308] = 0;
      puVar9[0x309] = 0;
      puVar9[0x30a] = 0;
      *puVar9 = &PTR_LAB_04b1ec78;
      *(undefined4 *)(puVar9 + 0x30b) = 0;
      puVar9[0x313] = 0;
      puVar9[0x319] = 0;
      puVar9[0x312] = &PTR_LAB_04b177d8;
      puVar9[0x318] = &DAT_3f8000003f800000;
      pvVar11 = *(void **)(param_1 + 0x508);
      *(undefined8 **)(param_1 + 0x508) = puVar9;
      if (pvVar11 != (void *)0x0) {
        FUN_033270a0(pvVar11);
        if (DAT_05ae7600 == 0) {
          free(pvVar11);
        }
        else {
          plVar7 = (long *)FUN_038cb610(DAT_05ae7600,pvVar11);
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x38))(plVar7,pvVar11);
          }
        }
        puVar9 = *(undefined8 **)(param_1 + 0x508);
      }
      *(undefined4 *)(puVar9 + 0x30a) = *(undefined4 *)(param_1 + 0x1066);
      *(undefined8 *)(*(long *)(param_1 + 0x508) + 0x390) = *(undefined8 *)(param_1 + 0x17e8);
      *(undefined8 *)(*(long *)(param_1 + 0x508) + 0x398) = *(undefined8 *)(param_1 + 0x17f0);
      lVar8 = *(long *)(param_1 + 0x508);
      uVar10 = *(undefined8 *)(param_1 + 0x528);
      *(undefined8 *)(lVar8 + 0x310) = *(undefined8 *)(param_1 + 0x520);
      *(undefined8 *)(lVar8 + 0x318) = uVar10;
      *(long *)(*(long *)(param_1 + 0x508) + 8) = param_1 + 0x6e8;
      FUN_0331fcf0(*(undefined8 *)(param_1 + 0x508),puVar2);
      lVar8 = *(long *)(param_1 + 0x508);
      if (*(long *)(lVar8 + 800) != 0) {
        FUN_03285190(*(undefined4 *)(param_1 + 0x1641c));
        lVar8 = *(long *)(param_1 + 0x508);
      }
    }
    break;
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
    lVar8 = *(long *)(param_1 + 0x510);
    if (lVar8 == 0) {
      puVar2 = (undefined8 *)(param_1 + 0x4e0);
      if (((*(long *)(param_1 + 0x520) != 0) && (*(int *)(param_1 + 0x1050) != 1)) &&
         ((*pcVar3 != '\0' || ((*pcVar1 != '\0' && (*(int *)(param_1 + 0x1568) == 0)))))) {
        *(undefined1 *)(*(long *)(param_1 + 0x520) + 0x177e) = 1;
      }
      plVar7 = (long *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x1af8,8);
      FUN_03319ffc(plVar7,puVar2);
      *plVar7 = (long)(PTR_DAT_04bc9708 + 0x10);
      memset(plVar7 + 0x2fe,0,0x2e8);
      plVar7[0x35c] = 0;
      *(undefined4 *)(plVar7 + 0x35d) = 0;
      *(undefined4 *)(plVar7 + 0x35b) = 4;
      plVar7[0x35e] = 0;
      *(undefined1 *)((long)plVar7 + 0x1aec) = 0;
      pvVar11 = *(void **)(param_1 + 0x510);
      *(long **)(param_1 + 0x510) = plVar7;
      if (pvVar11 != (void *)0x0) {
        FUN_03313980(pvVar11);
        if (DAT_05ae7600 == 0) {
          free(pvVar11);
        }
        else {
          plVar7 = (long *)FUN_038cb610(DAT_05ae7600,pvVar11);
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x38))(plVar7,pvVar11);
          }
        }
        plVar7 = *(long **)(param_1 + 0x510);
      }
      plVar7[0x72] = *(long *)(param_1 + 0x17e8);
      *(undefined8 *)(*(long *)(param_1 + 0x510) + 0x398) = *(undefined8 *)(param_1 + 0x17f0);
      lVar8 = *(long *)(param_1 + 0x510);
      uVar10 = *(undefined8 *)(param_1 + 0x528);
      *(undefined8 *)(lVar8 + 0x310) = *(undefined8 *)(param_1 + 0x520);
      *(undefined8 *)(lVar8 + 0x318) = uVar10;
      *(long *)(*(long *)(param_1 + 0x510) + 8) = param_1 + 0x6e8;
      FUN_0331fcf0(*(undefined8 *)(param_1 + 0x510),puVar2);
      lVar8 = *(long *)(param_1 + 0x510);
      if (*(long *)(lVar8 + 800) != 0) {
        FUN_03285190(*(undefined4 *)(param_1 + 0x1641c));
        lVar8 = *(long *)(param_1 + 0x510);
      }
    }
    break;
  default:
    goto switchD_03300928_default;
  }
  puVar4 = (uint *)(param_1 + 0x530) + (ulong)param_2 * 4;
  if (0x1a < param_2) {
    puVar4 = (uint *)(param_1 + 0x530);
  }
  *puVar4 = param_2;
  *(long *)(puVar4 + 2) = lVar8;
switchD_03300928_default:
  puVar5 = (undefined4 *)(param_1 + 0x530) + (ulong)param_2 * 4;
  if (0x1a < param_2) {
    puVar5 = (undefined4 *)(param_1 + 0x530);
  }
  *(undefined4 **)(param_1 + 0x6e0) = puVar5;
  plVar7 = *(long **)(puVar5 + 2);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x10))(plVar7,1);
    lVar8 = *(long *)(puVar5 + 2);
    if ((lVar8 != 0) && (*(char *)(lVar8 + 0x17df) == '\0')) {
      FUN_0331ff80(lVar8,*puVar5,1,param_4,0xffffffff,(int *)(param_1 + 0x1050),param_3 & 1);
    }
  }
  if ((*(int *)(param_1 + 0x1050) == 1) ||
     ((((*pcVar3 == '\0' && ((*pcVar1 == '\0' || (*(int *)(param_1 + 0x1568) != 0)))) ||
       (*(long *)(param_1 + 0x520) == 0)) ||
      (*(undefined8 *)(*(long *)(param_1 + 0x520) + 0xdf0) =
            *(undefined8 *)(*(long *)(param_1 + 0x6e0) + 8),
      *(char *)(*(long *)(param_1 + 0x520) + 0x177e) == '\0')))) {
    return;
  }
  FUN_0335d8a0();
  return;
}

