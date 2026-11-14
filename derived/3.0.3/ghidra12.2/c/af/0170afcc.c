
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0170afcc(undefined4 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  uint *puVar7;
  void *__s;
  long lVar8;
  uint uVar9;
  uint *puVar10;
  long lVar11;
  uint local_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  undefined **local_60;
  uint *puStack_58;
  uint local_24;
  
  if ((((**(char **)(param_3 + 8) == '\0') || (uVar6 = FUN_0171ef80(param_3,10), (uVar6 & 1) == 0))
      && (puVar7 = (uint *)FUN_0171ee68(param_2), puVar7 != (uint *)0x0)) &&
     ((uVar9 = *puVar7, uVar9 != 0 && (puVar7 != (uint *)(ulong)uVar9)))) {
    puVar10 = (uint *)((long)puVar7 - (long)(ulong)uVar9);
    if ((*puVar10 != 0) && ((uVar9 = puVar10[1], uVar9 != 0 && ((ulong)(ushort)puVar10[2] != 0)))) {
      lVar11 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
      if (lVar11 != 0) {
        uVar1 = 0;
        if ((ulong)uVar9 != 0) {
          uVar1 = (uint)((ulong)((long)puVar7 - lVar11) / (ulong)uVar9);
        }
        if (*puVar10 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if (((uVar1 < DAT_05248f20) &&
            (uVar3 = *(ushort *)(DAT_05248f28 + (long)(int)uVar1 * 2), local_24 = (uint)uVar3,
            uVar3 < 0x75)) && (local_24 != 0)) {
          puVar7 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
          uVar9 = *puVar7 ^ *puVar7 << 0xb;
          uVar2 = puVar7[3];
          *puVar7 = puVar7[1];
          puVar7[1] = puVar7[2];
          uVar1 = uVar9 ^ uVar2;
          uVar9 = uVar9 >> 8 ^ uVar2 >> 0x13 ^ uVar1;
          puVar7[2] = uVar2;
          puVar7[3] = uVar9;
          local_70 = (uVar9 ^ uVar1 >> 0x1e) * 0x6c078965 + 1;
          uStack_6c = (local_70 ^ local_70 >> 0x1e) * 0x6c078965 + 2;
          local_68 = (uStack_6c ^ uStack_6c >> 0x1e) * 0x6c078965 + 3;
          uStack_64 = (local_68 ^ local_68 >> 0x1e) * 0x6c078965 + 4;
          if (((DAT_05248e20 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_05248e20), iVar5 != 0))
          {
            FUN_01a44770(&DAT_052486b0);
            __cxa_guard_release(&DAT_05248e20);
          }
          __s = (void *)(**(code **)(DAT_052486b0 + 0x18))(&DAT_052486b0);
          memset(__s,0,0x754);
          puStack_58 = &local_24;
          local_60 = &PTR_FUN_049ff4c0;
          FUN_008a1ba0(&DAT_052486b0,&local_60);
          lVar8 = (**(code **)(DAT_052486b0 + 0x20))(&DAT_052486b0);
          lVar11 = 0;
          iVar5 = 0;
          do {
            puVar7 = (uint *)(lVar8 + lVar11);
            lVar11 = lVar11 + 4;
            uVar9 = *puVar7 - (*puVar7 >> 1 & 0x55555555);
            uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
            uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
            uVar9 = uVar9 + (uVar9 >> 8);
            iVar5 = (uVar9 + (uVar9 >> 0x10) & 0x3f) + iVar5;
          } while (lVar11 != 0x754);
          if (iVar5 != 0) {
            lVar8 = (**(code **)(DAT_052486b0 + 0x20))(&DAT_052486b0);
            lVar11 = 0;
            uVar9 = 0;
            do {
              puVar7 = (uint *)(lVar8 + lVar11);
              lVar11 = lVar11 + 4;
              uVar1 = *puVar7 - (*puVar7 >> 1 & 0x55555555);
              uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
              uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
              uVar1 = uVar1 + (uVar1 >> 8);
              uVar9 = (uVar1 + (uVar1 >> 0x10) & 0x3f) + uVar9;
            } while (lVar11 != 0x754);
            uVar1 = local_70 ^ local_70 << 0xb;
            local_70 = uStack_6c;
            uStack_6c = local_68;
            uVar1 = uVar1 >> 8 ^ uStack_64 >> 0x13 ^ uVar1 ^ uStack_64;
            local_68 = uStack_64;
            uStack_64 = uVar1;
            FUN_00889f80(param_1,&DAT_052486b0,(int)((ulong)uVar1 * (ulong)uVar9 >> 0x20) + 1);
            FUN_01a4c66c(&local_70,param_1);
            return;
          }
        }
      }
    }
  }
  uVar4 = DAT_0558600c;
  *param_1 = _DAT_05586008;
  param_1[1] = uVar4;
  return;
}

