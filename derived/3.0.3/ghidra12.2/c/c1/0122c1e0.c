
undefined8 FUN_0122c1e0(float *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_78 [8];
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  byte local_60;
  undefined **local_58;
  uint local_50;
  uint local_4c;
  int local_44;
  
  local_50 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
  local_4c = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
  local_58 = &PTR_FUN_04986b58;
  if ((local_50 & 1) != 0) {
    local_50 = local_50 - 1;
  }
  if ((local_4c & 1) != 0) {
    local_4c = local_4c - 1;
  }
  local_68 = 0;
  if (DAT_05aed670 == 0) {
    puVar8 = &DAT_055c04a0;
  }
  else {
    puVar8 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar8 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar1 = FUN_006bd550(*puVar8,0);
      puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar8 = &DAT_055c04a0;
      }
    }
  }
  local_64 = *(undefined4 *)(puVar8 + 7);
  local_60 = FUN_017baf44();
  local_60 = local_60 & 1;
  local_70 = PTR_DAT_04bb6268 + 0x10;
  FUN_01a5033c(auStack_78,&local_70,0,&local_58,0);
  lVar5 = DAT_05150358;
  if (((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
      ((*(long *)(DAT_05150358 + 0x488) != 0 &&
       (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))) &&
     ((*(long *)(DAT_05150358 + 0x2b0) != 0 && (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)
      ))) {
    uVar2 = FUN_0277d6c4(auStack_78);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      iVar1 = FUN_0277d6c4(auStack_78);
      if (iVar1 == 0xeb12) {
        local_44 = 0;
      }
      else {
        iVar1 = FUN_0277d6c4(auStack_78);
        if (iVar1 == 0xeb13) {
          local_44 = 1;
        }
        else {
          iVar1 = FUN_0277d6c4(auStack_78);
          if (iVar1 == 0xeb16) {
            local_44 = 2;
          }
          else {
            iVar1 = FUN_0277d6c4(auStack_78);
            if (iVar1 == 0xeb15) {
              local_44 = 3;
            }
            else {
              iVar1 = FUN_0277d6c4(auStack_78);
              if (iVar1 != 0xeb14) {
                return 0;
              }
              local_44 = 4;
            }
          }
        }
      }
      lVar5 = *(long *)(*(long *)(DAT_0514f7f0 + 0x7e20) + (long)local_44 * 8);
      uVar9 = *(undefined4 *)(lVar5 + 0x5c);
      uVar10 = *(undefined4 *)(lVar5 + 0x94);
      uVar11 = *(undefined4 *)(lVar5 + 0xcc);
      uVar6 = *(undefined8 *)(lVar5 + 0x8c);
      uVar7 = *(undefined8 *)(lVar5 + 0xc4);
      __ptr = *(void **)(lVar5 + 0x60);
      __ptr_00 = *(void **)(lVar5 + 0x98);
      __ptr_01 = *(void **)(lVar5 + 0xd0);
      *param_2 = *(undefined8 *)(lVar5 + 0x54);
      *(undefined4 *)(param_2 + 1) = uVar9;
      *param_3 = uVar6;
      *(undefined4 *)(param_3 + 1) = uVar10;
      *param_4 = uVar7;
      *(undefined4 *)(param_4 + 1) = uVar11;
      uVar3 = (**(code **)(**(long **)(DAT_05aed538 + 0x330) + 0x88))
                        (*(long **)(DAT_05aed538 + 0x330),__ptr_01);
      if ((__ptr_01 != (void *)0x0) && ((uVar3 & 1) != 0)) {
        if (DAT_05ae7600 == 0) {
          free(__ptr_01);
        }
        else {
          plVar4 = (long *)FUN_038cb610(DAT_05ae7600,__ptr_01);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x38))(plVar4,__ptr_01);
          }
        }
      }
      uVar3 = (**(code **)(**(long **)(DAT_05aed538 + 0x330) + 0x88))
                        (*(long **)(DAT_05aed538 + 0x330),__ptr_00);
      if (((uVar3 & 1) != 0) && (__ptr_00 != (void *)0x0)) {
        if (DAT_05ae7600 == 0) {
          free(__ptr_00);
        }
        else {
          plVar4 = (long *)FUN_038cb610(DAT_05ae7600,__ptr_00);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x38))(plVar4,__ptr_00);
          }
        }
      }
      uVar3 = (**(code **)(**(long **)(DAT_05aed538 + 0x330) + 0x88))
                        (*(long **)(DAT_05aed538 + 0x330),__ptr);
      if ((uVar3 & 1) == 0) {
        return 1;
      }
      if (__ptr == (void *)0x0) {
        return 1;
      }
      if (DAT_05ae7600 == 0) {
        free(__ptr);
        return 1;
      }
      plVar4 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
      }
      return 1;
    }
  }
  return 0;
}

