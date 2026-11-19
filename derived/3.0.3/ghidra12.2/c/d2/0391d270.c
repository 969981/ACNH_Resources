
void FUN_0391d270(long param_1,long param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  ushort uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  uint local_90;
  undefined8 local_8c;
  uint local_74;
  
  if (*(char *)(param_1 + 0x119) != '\0') {
    local_74 = 0;
    lVar1 = param_1 + 0x328;
    puVar2 = (uint *)(param_1 + 0x448);
    do {
      iVar10 = 0;
      do {
        *(undefined8 *)(param_1 + 0x388) = 0;
        *(undefined8 *)(param_1 + 0x348) = 0;
        *(undefined8 *)(param_1 + 0x350) = 0;
        uVar7 = *(ushort *)(param_1 + 0x110) >> (ulong)(local_74 & 0x1f);
        *(undefined4 *)(param_1 + 0x398) = *(undefined4 *)(param_1 + 0xe0);
        *(undefined4 *)(param_1 + 0x39c) = *(undefined4 *)(param_1 + 0xe4);
        *(undefined8 *)(param_1 + 0x358) = 0;
        *(undefined8 *)(param_1 + 0x360) = 0;
        *(undefined8 *)(param_1 + 0x3a0) = *(undefined8 *)(param_1 + 0xe8);
        *(undefined8 *)(param_1 + 0x3a8) = *(undefined8 *)(param_1 + 0xf0);
        *(undefined8 *)(param_1 + 0x368) = 0;
        *(undefined8 *)(param_1 + 0x370) = 0;
        *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_1 + 0xf8);
        *(undefined4 *)(param_1 + 0x3b4) = *(undefined4 *)(param_1 + 0xfc);
        *(undefined8 *)(param_1 + 0x378) = 0;
        *(undefined8 *)(param_1 + 0x380) = 0;
        *(undefined8 *)(param_1 + 0x3c0) = *(undefined8 *)(param_1 + 0x108);
        *(undefined8 *)(param_1 + 0x3b8) = *(undefined8 *)(param_1 + 0x100);
        *(undefined8 *)(param_1 + 0x3df) = *(undefined8 *)(param_1 + 0x127);
        *(undefined8 *)(param_1 + 0x3c8) = *(undefined8 *)(param_1 + 0x110);
        *(undefined8 *)(param_1 + 0x3d0) = *(undefined8 *)(param_1 + 0x118);
        *(undefined8 *)(param_1 + 0x3d8) = *(undefined8 *)(param_1 + 0x120);
        FUN_038fd1e0(param_1 + 1000);
        FUN_038fd2f0(param_1 + 1000,param_1 + 0x130);
        *(undefined8 *)(param_1 + 0x428) = *(undefined8 *)(param_1 + 0x170);
        *(undefined4 *)(param_1 + 0x430) = *(undefined4 *)(param_1 + 0x178);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = *puVar2 & 0xfffffffb | 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar7 < 2) {
          uVar7 = 1;
        }
        uVar3 = iVar10 + param_3 * 6;
        if (uVar3 != *(ushort *)(param_1 + 0x44c)) {
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = *puVar2 & 0xfffffffd | 2;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          *(short *)(param_1 + 0x44c) = (short)uVar3;
        }
        if (local_74 != *(byte *)(param_1 + 0x44e)) {
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = *puVar2 | 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          *(char *)(param_1 + 0x44e) = (char)local_74;
        }
        fVar15 = (float)uVar7;
        (**(code **)(*(long *)(param_1 + 0x390) + 0x10))(param_1 + 0x390);
        *(long *)(param_1 + 0x348) = param_1 + 0x390;
        *(undefined8 *)(param_1 + 0x338) = 0;
        *(float *)(param_1 + 0x340) = fVar15;
        *(float *)(param_1 + 0x344) = fVar15;
        *(float *)(param_1 + 0x330) = fVar15;
        *(float *)(param_1 + 0x334) = fVar15;
        (**(code **)(*(long *)(param_1 + 0x328) + 0x38))(lVar1,param_2);
        if (iVar10 == 0) {
          local_a0 = 0x7f7fffff7f7fffff;
          local_98 = 0xff7fffffff7fffff;
          local_a8 = &PTR_LAB_04b65888;
          local_8c = 0x3f80000000000000;
          local_90 = DAT_05ae77d0;
          if (DAT_05ae77d0 < 6) {
            if ((1 << (ulong)(DAT_05ae77d0 & 0x1f) & 0x39U) == 0) {
              fVar15 = *(float *)(param_1 + 0x334);
              fVar11 = *(float *)(param_1 + 0x330);
            }
            else {
              fVar15 = *(float *)(param_1 + 0x330);
              fVar11 = *(float *)(param_1 + 0x334);
            }
            fVar14 = fVar15;
            if (fVar15 <= 0.0) {
              fVar14 = 0.0;
            }
            fVar13 = 0.0;
            if (fVar15 <= 0.0) {
              fVar13 = fVar15;
            }
            fVar12 = fVar11;
            fVar15 = 0.0;
            if (fVar11 <= 0.0) {
              fVar12 = 0.0;
              fVar15 = fVar11;
            }
            local_a0 = CONCAT44(fVar15,fVar13);
            local_98 = CONCAT44(fVar12,fVar14);
          }
          FUN_038e77e4(&local_a8,param_2,lVar1);
        }
        local_98 = 0xff7fffffff7fffff;
        local_a8 = (undefined **)(PTR_DAT_04bd0f08 + 0x10);
        local_a0 = 0x7f7fffff7f7fffff;
        local_8c = 0x3f80000000000000;
        local_90 = *(uint *)PTR_DAT_04bd0ea8;
        if (local_90 < 6) {
          if ((1 << (ulong)(local_90 & 0x1f) & 0x39U) == 0) {
            fVar15 = *(float *)(param_1 + 0x334);
            fVar11 = *(float *)(param_1 + 0x330);
          }
          else {
            fVar15 = *(float *)(param_1 + 0x330);
            fVar11 = *(float *)(param_1 + 0x334);
          }
          fVar14 = fVar15;
          if (fVar15 <= 0.0) {
            fVar14 = 0.0;
          }
          fVar13 = 0.0;
          if (fVar15 <= 0.0) {
            fVar13 = fVar15;
          }
          fVar12 = fVar11;
          fVar15 = 0.0;
          if (fVar11 <= 0.0) {
            fVar12 = 0.0;
            fVar15 = fVar11;
          }
          local_a0 = CONCAT44(fVar15,fVar13);
          local_98 = CONCAT44(fVar12,fVar14);
        }
        FUN_039025b0(0x3f800000,lVar1,param_2,0,1,param_4,0,&local_a8,1);
        iVar10 = iVar10 + 1;
      } while (iVar10 != 6);
      local_74 = local_74 + 1;
    } while (local_74 < *(byte *)(param_1 + 0x119));
  }
  uVar3 = *(uint *)(param_1 + 1000);
  if (uVar3 != 0xffffffff) {
    if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 3 & 1) == 0) {
      uVar6 = uVar3 - *(ushort *)(DAT_05ae78f0 + 0x3da);
      if (*(uint *)(DAT_05ae78f0 + 0x368) <= uVar6) {
        uVar6 = 0;
      }
      if ((*(uint *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar6 * 0x20 + 4) >> 2 & 1) == 0)
      {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar3 & 0x3f);
        return;
      }
    }
    if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 5 & 1) == 0) {
      uVar8 = 0x112;
      uVar9 = 0x12;
    }
    else {
      uVar8 = 0x111;
      uVar9 = 0x11;
    }
    if ((*(uint *)(DAT_05ae78f0 + 800) & 2) != 0) {
      uVar9 = uVar8;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar9);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
  return;
}

