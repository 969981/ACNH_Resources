
void FUN_018147b8(long *param_1)

{
  long *plVar1;
  uint *puVar2;
  byte *pbVar3;
  char cVar4;
  byte bVar5;
  short sVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  byte *pbVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  undefined4 local_34;
  long *local_30;
  undefined4 local_28;
  
  (**(code **)(*(long *)(param_1[0x7a] + 0x2d8) + 0x28))(param_1[0x7a] + 0x2d8);
  puVar7 = PTR_DAT_04bb27d0;
  lVar12 = **(long **)PTR_DAT_04bb27d0;
  bVar5 = *(byte *)(lVar12 + 0x473);
  if ((long)(char)bVar5 != 0xffffffffffffffff) {
    pbVar10 = (byte *)(lVar12 + 0x48);
    uVar13 = (long)(char)bVar5 & 0xffffffff;
    pbVar3 = pbVar10 + uVar13 * 0x80;
    if (7 < bVar5) {
      pbVar3 = pbVar10;
    }
    if ((*pbVar3 >> 3 & 1) != 0) {
      lVar12 = (*(long **)PTR_DAT_04bb27d0)[2] + 0x108;
      lVar9 = lVar12 + uVar13 * 0xc;
      if (0xb < bVar5) {
        lVar9 = lVar12;
      }
      if (*(char *)(lVar9 + 10) == '\0') {
        *(undefined4 *)((long)param_1 + 0x3e4) = 0;
        cVar4 = *(char *)((long)param_1 + 0x432);
        goto joined_r0x0181483c;
      }
    }
  }
  cVar4 = *(char *)((long)param_1 + 0x432);
joined_r0x0181483c:
  if (cVar4 == '\0') {
    sVar6 = *(short *)PTR_DAT_04bb6298;
    if (sVar6 != -1) {
      local_30 = (long *)CONCAT44(local_30._4_4_,0x1a);
      puVar2 = (uint *)((long)PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 2 * 4);
      if (0xff < (uint)(int)sVar6) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 0x1a & 1) != 0) {
        local_30 = (long *)CONCAT44(local_30._4_4_,1);
        uVar11 = 1;
        if ((((*puVar2 >> 1 & 1) != 0) && (*(char *)((long)param_1 + 0x495) != '\0')) &&
           ((int)param_1[0x92] < 2)) {
          lVar12 = param_1[9];
          if (lVar12 != 0) {
            uVar11 = *(undefined4 *)(lVar12 + 0x230);
          }
          local_34 = *(undefined4 *)PTR_DAT_04bb3238;
          if (lVar12 != 0) {
            local_34 = uVar11;
          }
          FUN_0071c8d0(&local_30,PTR_DAT_04bb4b88,&local_34,0);
          plVar1 = local_30;
          if (local_30 != (long *)0x0) {
            if (((*PTR_DAT_04bb4b78 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb4b78), iVar8 != 0)) {
              *(undefined **)PTR_DAT_04bb4b70 = PTR_DAT_04bb2e50 + 0x10;
              __cxa_guard_release(PTR_DAT_04bb4b78);
            }
            uVar13 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb4b70);
            if ((uVar13 & 1) == 0) {
              local_28._0_2_ = (ushort)(byte)local_28;
            }
          }
          if (((local_30 != (long *)0x0) && ((byte)local_28 != '\0')) &&
             ((local_28._1_1_ != '\0' && (local_30[0x54] != 0)))) {
            *(undefined4 *)(local_30[0x54] + 0x298) = 0;
          }
        }
      }
    }
    lVar12 = param_1[0x7a];
    if (lVar12 != 0) {
      if (*(int *)(lVar12 + 0x2d0) == 3) {
        (**(code **)(*(long *)(lVar12 + 0x2d8) + 0x28))(lVar12 + 0x2d8);
        if (*(byte *)(**(long **)puVar7 + 0x476) < 2) {
          return;
        }
        (**(code **)(*(long *)(param_1[0x7a] + 0x2d8) + 0x28))(param_1[0x7a] + 0x2d8);
        lVar12 = **(long **)puVar7;
        bVar5 = *(byte *)(lVar12 + 0x473);
        if ((long)(char)bVar5 != 0xffffffffffffffff) {
          pbVar10 = (byte *)(lVar12 + 0x48);
          uVar13 = (long)(char)bVar5 & 0xffffffff;
          pbVar3 = pbVar10 + uVar13 * 0x80;
          if (7 < bVar5) {
            pbVar3 = pbVar10;
          }
          if ((*pbVar3 >> 3 & 1) != 0) {
            lVar12 = (*(long **)puVar7)[2] + 0x108;
            lVar9 = lVar12 + uVar13 * 0xc;
            if (0xb < bVar5) {
              lVar9 = lVar12;
            }
            if (*(char *)(lVar9 + 10) == '\0') {
              return;
            }
          }
        }
        if (param_1[0x7a] == 0) {
          return;
        }
        FUN_006fb3d0();
        return;
      }
      if (*(int *)(lVar12 + 0x2d0) != 0) {
        return;
      }
      (**(code **)(*(long *)(lVar12 + 0x2d8) + 0x28))(lVar12 + 0x2d8);
      lVar12 = **(long **)puVar7;
      bVar5 = *(byte *)(lVar12 + 0x473);
      if ((long)(char)bVar5 != 0xffffffffffffffff) {
        pbVar10 = (byte *)(lVar12 + 0x48);
        uVar13 = (long)(char)bVar5 & 0xffffffff;
        pbVar3 = pbVar10 + uVar13 * 0x80;
        if (7 < bVar5) {
          pbVar3 = pbVar10;
        }
        if ((*pbVar3 >> 3 & 1) != 0) {
          lVar12 = (*(long **)puVar7)[2] + 0x108;
          lVar9 = lVar12 + uVar13 * 0xc;
          if (0xb < bVar5) {
            lVar9 = lVar12;
          }
          if (*(char *)(lVar9 + 10) == '\0' && *(char *)((long)param_1 + 0x433) == '\0') {
            lVar12 = (long)(int)*(uint *)(param_1[0x7a] + 0x2e0);
            lVar9 = *(long *)(*(long *)PTR_DAT_04bb4790 + 0x10);
            if (*(uint *)(*(long *)PTR_DAT_04bb4790 + 8) <= *(uint *)(param_1[0x7a] + 0x2e0) ||
                lVar9 == 0) {
              lVar12 = 0;
            }
            if ((int)param_1[0x50] != 2) {
              pbVar10 = (byte *)(lVar9 + lVar12 * 10);
              if ((byte)(*pbVar10 >> 7 | (pbVar10[1] & 7) << 1) == 2) {
                local_28 = 0;
                local_30 = (long *)0x0;
                FUN_0181398c(pbVar10,&local_30);
                FUN_018139dc(param_1,&local_30);
              }
              else if ((int)param_1[0x50] != 3) {
                (**(code **)(*param_1 + 0x238))(param_1,pbVar10);
              }
            }
          }
        }
      }
    }
  }
  if (*(char *)((long)param_1 + 0x36b) != '\0') {
    param_1[0x6a] = 0;
    param_1[0x69] = 0;
    param_1[0x68] = 0;
  }
  plVar1 = param_1 + 0x58;
  uVar13 = (**(code **)(param_1[0x58] + 0x10))(plVar1);
  if ((uVar13 & 1) != 0) {
    (**(code **)*plVar1)(plVar1);
  }
  FUN_03ebb268(param_1 + 0x4f);
  plVar1 = param_1 + 0x5c;
  uVar13 = (**(code **)(param_1[0x5c] + 0x10))(plVar1);
  if ((uVar13 & 1) != 0) {
    (**(code **)*plVar1)(plVar1);
  }
  uVar13 = (**(code **)(*param_1 + 0xf8))(param_1);
  if ((uVar13 & 1) != 0) {
    (**(code **)(*param_1 + 0x120))(param_1);
    (**(code **)(*param_1 + 0x128))(param_1);
  }
  return;
}

