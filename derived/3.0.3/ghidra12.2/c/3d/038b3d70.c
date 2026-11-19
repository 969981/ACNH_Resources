
void * FUN_038b3d70(long *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  void *pvVar11;
  void *pvVar12;
  long lVar13;
  uint uVar14;
  int local_ac;
  undefined *local_a8;
  long local_a0;
  long *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  uint local_70;
  uint local_64;
  
  if ((*(long *)(param_2 + 0x10) != 0 && *(int *)(param_2 + 0x18) == 0) ||
     ((*(byte *)(param_2 + 0x2c) & 0x1f) != 0)) {
    return (void *)0x0;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  puVar1 = PTR_DAT_04bb60d8 + 0x10;
  local_70 = 0;
  local_98 = (long *)0x0;
  uStack_90 = 0;
  local_a0 = 0;
  if ((char)param_1[0xf] != '\0') {
    uVar10 = *(uint *)(param_2 + 0x30);
    local_a8 = puVar1;
    (**(code **)(*param_1 + 0x20))(param_1);
    local_70 = uVar10;
    local_a0 = (**(code **)(*param_1 + 0x68))(param_1,&local_a8,param_2,0);
    if (local_a0 != 0) {
      uVar10 = *(uint *)(param_2 + 0x18);
      pvVar11 = *(void **)(param_2 + 0x10);
      local_98 = param_1;
      if ((pvVar11 == (void *)0x0) || (*(char *)(param_2 + 0x35) != '\0')) {
        local_64 = 0;
        if (((char)param_1[0xf] == '\0') ||
           ((uVar6 = (**(code **)(*param_1 + 0xb8))(param_1,&local_64,&local_a8), (uVar6 & 1) == 0
            || (local_64 == 0)))) goto LAB_038b3fc8;
        if (uVar10 == 0) {
          uVar14 = *(uint *)(param_2 + 0x2c);
          if (uVar14 == 0) {
            uVar10 = local_64 + 0x1f & 0xffffffe0;
          }
          else {
            uVar10 = 0;
            if (uVar14 != 0) {
              uVar10 = ((local_64 + uVar14) - 1) / uVar14;
            }
            uVar10 = uVar10 * uVar14;
          }
        }
        else {
          if (uVar10 < local_64) goto LAB_038b3fc8;
          uVar14 = *(uint *)(param_2 + 0x2c);
          if (uVar14 != 0) {
            uVar4 = 0;
            if (uVar14 != 0) {
              uVar4 = uVar10 / uVar14;
            }
            if (uVar10 != uVar4 * uVar14) goto LAB_038b3fc8;
          }
        }
        pvVar11 = *(void **)(param_2 + 0x10);
        if (pvVar11 != (void *)0x0) goto LAB_038b3e5c;
        iVar3 = *(int *)(param_2 + 0x28);
        plVar7 = *(long **)(param_2 + 0x20);
        iVar9 = -iVar3;
        if (-1 < iVar3) {
          iVar9 = iVar3;
        }
        if (iVar9 < 0x21) {
          iVar9 = 0x20;
        }
        iVar2 = -iVar9;
        if (-1 < iVar3) {
          iVar2 = iVar9;
        }
        if (plVar7 == (long *)0x0) {
          lVar13 = *(long *)PTR_DAT_04bb2698;
          lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar7 = (long *)(lVar13 + 8);
          if (lVar8 != 0) {
            plVar7 = (long *)(lVar8 + 0xa8);
          }
          plVar7 = (long *)*plVar7;
        }
        pvVar11 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,uVar10,iVar2);
        if (pvVar11 == (void *)0x0) goto LAB_038b3fcc;
        bVar5 = true;
      }
      else {
LAB_038b3e5c:
        bVar5 = false;
      }
      local_ac = 0;
      if (((char)param_1[0xf] != '\0') &&
         (uVar6 = (**(code **)(*param_1 + 0x48))(param_1,&local_a8), (uVar6 & 1) != 0)) {
        if (local_70 == 0) {
          uVar6 = (**(code **)(*param_1 + 0x90))(param_1,&local_ac,&local_a8,pvVar11,uVar10);
          if ((uVar6 & 1) == 0) goto LAB_038b3fbc;
        }
        else {
          iVar9 = 0;
          pvVar12 = pvVar11;
          uVar14 = uVar10;
          do {
            local_64 = 0;
            uVar4 = uVar14;
            if ((int)local_70 <= (int)uVar14) {
              uVar4 = local_70;
            }
            uVar6 = (**(code **)(*param_1 + 0x90))(param_1,&local_64,&local_a8,pvVar12,uVar4);
            if ((uVar6 & 1) == 0) {
              local_ac = iVar9;
              goto LAB_038b3fbc;
            }
            iVar9 = local_64 + iVar9;
            if (local_64 < uVar4) break;
            pvVar12 = (void *)((long)pvVar12 + (ulong)local_64);
            uVar14 = uVar14 - uVar4;
          } while (uVar14 != 0);
          local_ac = iVar9;
        }
        if ((((char)param_1[0xf] != '\0') &&
            (uVar6 = (**(code **)(*param_1 + 0x48))(param_1,&local_a8), (uVar6 & 1) != 0)) &&
           (uVar6 = (**(code **)(*param_1 + 0x70))(param_1,&local_a8), (uVar6 & 1) != 0)) {
          *(bool *)(param_2 + 0x40) = bVar5;
          local_a0 = 0;
          local_98 = (long *)0x0;
          *(int *)(param_2 + 0x38) = local_ac;
          *(uint *)(param_2 + 0x3c) = uVar10;
          goto LAB_038b3fcc;
        }
      }
LAB_038b3fbc:
      if (bVar5) {
        operator_delete__(pvVar11);
      }
    }
  }
LAB_038b3fc8:
  pvVar11 = (void *)0x0;
LAB_038b3fcc:
  plVar7 = local_98;
  if (((local_98 != (long *)0x0) && ((char)local_98[0xf] != '\0')) &&
     (local_a8 = puVar1, uVar6 = (**(code **)(*local_98 + 0x48))(local_98,&local_a8),
     (uVar6 & 1) != 0)) {
    (**(code **)(*plVar7 + 0x70))(plVar7,&local_a8);
  }
  return pvVar11;
}

