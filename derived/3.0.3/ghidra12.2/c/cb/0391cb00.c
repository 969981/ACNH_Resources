
void FUN_0391cb00(long param_1,long param_2,long param_3,uint param_4,undefined4 param_5,
                 long param_6,int *param_7)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 uVar11;
  float fVar12;
  
  uVar4 = *(ushort *)(param_3 + 0x30);
  *(undefined8 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0;
  FUN_01560750(param_1 + 0x390,param_3,param_4,param_5);
  uVar3 = *(uint *)(param_1 + 1000);
  *(long *)(param_1 + 0x348) = param_1 + 0x390;
  if (uVar3 != 0xffffffff) {
    if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 3 & 1) == 0) {
      uVar7 = uVar3 - *(ushort *)(DAT_05ae78f0 + 0x3da);
      if (*(uint *)(DAT_05ae78f0 + 0x368) <= uVar7) {
        uVar7 = 0;
      }
      if ((*(uint *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar7 * 0x20 + 4) >> 2 & 1) == 0)
      {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar3 & 0x3f);
        goto LAB_0391cc0c;
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
LAB_0391cc0c:
  if (param_6 != 0) {
    FUN_0155a100(param_1 + 0x470,param_6,0,0);
    lVar10 = *(long *)(param_7 + 2);
    iVar2 = param_7[1];
    if (((lVar10 != *(long *)(param_1 + 0x540)) || (*param_7 != *(int *)(param_1 + 0x538))) ||
       (iVar2 != *(int *)(param_1 + 0x53c))) {
      uVar11 = *(undefined8 *)(param_7 + 4);
      *(int *)(param_1 + 0x538) = *param_7;
      puVar1 = (uint *)(param_1 + 0x528);
      *(int *)(param_1 + 0x53c) = iVar2;
      *(long *)(param_1 + 0x540) = lVar10;
      *(undefined8 *)(param_1 + 0x548) = uVar11;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = *puVar1 | 8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    *(long *)(param_1 + 0x388) = param_1 + 0x470;
    if (*(int *)(param_1 + 0x4c8) == -1) {
      if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 3 & 1) == 0) {
        uVar3 = 0;
        if (~(uint)*(ushort *)(DAT_05ae78f0 + 0x3da) < *(uint *)(DAT_05ae78f0 + 0x368)) {
          uVar3 = ~(uint)*(ushort *)(DAT_05ae78f0 + 0x3da);
        }
        if ((*(uint *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar3 * 0x20 + 4) >> 2 & 1) == 0
           ) {
          *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 0x8000000000000000;
          goto LAB_0391cd10;
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
  }
LAB_0391cd10:
  uVar4 = uVar4 >> (ulong)(param_4 & 0x1f);
  *(undefined8 *)(param_1 + 0x338) = 0;
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  fVar12 = (float)uVar4;
  *(float *)(param_1 + 0x340) = fVar12;
  *(float *)(param_1 + 0x344) = fVar12;
  *(float *)(param_1 + 0x330) = fVar12;
  *(float *)(param_1 + 0x334) = fVar12;
                    /* WARNING: Could not recover jumptable at 0x0391cd58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x328) + 0x38))(param_1 + 0x328,param_2);
  return;
}

