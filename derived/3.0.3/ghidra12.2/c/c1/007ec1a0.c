
void FUN_007ec1a0(int *param_1,long param_2,ushort *param_3,byte *param_4,uint param_5)

{
  byte *pbVar1;
  ushort *puVar2;
  ushort uVar3;
  byte bVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  uint *puVar14;
  uint local_64;
  uint local_60;
  uint uStack_5c;
  undefined2 local_58;
  undefined1 local_56;
  byte local_55;
  undefined4 local_54;
  
  *(undefined2 *)(param_2 + 0xc4) = 0x100;
  iVar9 = 1;
  if (*(uint *)(param_2 + 0xcc) < 0xfffffffe) {
    iVar9 = *(uint *)(param_2 + 0xcc) + 1;
  }
  *(int *)(param_2 + 0xc0) = iVar9;
  *(int *)(param_2 + 0xcc) = iVar9;
  *(int *)(param_2 + 0xd0) = iVar9;
  if (*(char *)(param_2 + 0xd8) != '\0') {
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  puVar5 = PTR_DAT_04bb3128;
  if ((DAT_0537d558 != (long *)0x0) && ((int)DAT_0537d558[0x10] == 3)) {
    uVar3 = *param_3;
    if (((*PTR_DAT_04bb3128 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar9 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    if (0 < (int)DAT_04c8c0f0) {
      uVar10 = 0;
      do {
        if (*(uint *)(DAT_04c8c0f8 + uVar10 * 4) == (uint)(uVar3 >> 0xb)) goto LAB_007ec26c;
        uVar10 = uVar10 + 1;
      } while (DAT_04c8c0f0 != uVar10);
    }
    uVar10 = 0;
LAB_007ec26c:
    if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar9 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    if (0 < (int)DAT_04c8c0f0) {
      uVar13 = 0;
      do {
        if (*(int *)(DAT_04c8c0f8 + uVar13 * 4) == 0x1a) {
          if ((int)uVar10 != (int)uVar13) goto LAB_007ec308;
          goto LAB_007ec2c8;
        }
        uVar13 = uVar13 + 1;
      } while (DAT_04c8c0f0 != uVar13);
    }
    if ((int)uVar10 == -1) {
LAB_007ec2c8:
      local_64 = param_5;
      if (((param_5 == 0) && (uVar10 = FUN_0308b800(param_3), (uVar10 & 1) == 0)) &&
         (uVar10 = FUN_02d6f0e0(param_4,param_3), (uVar10 & 1) == 0)) {
        iVar9 = *(int *)(param_2 + 0xd0);
        if (iVar9 == *(int *)(param_2 + 0xc0)) {
          *(undefined4 *)(param_2 + 0xc4) = 0;
          *(undefined1 *)(param_2 + 200) = 1;
        }
        goto LAB_007ec320;
      }
      uVar10 = FUN_01525be0(*(undefined8 *)PTR_DAT_04bb4c80,param_3);
      if ((uVar10 & 1) == 0) {
        puVar14 = *(uint **)PTR_DAT_04bb3708;
        FUN_007ef010(&local_64,param_3);
        uVar7 = *puVar14;
        uVar10 = (ulong)uVar7;
        if (0 < (int)uVar7) {
          puVar12 = *(undefined8 **)(puVar14 + 2);
          do {
            if ((uint)*(ushort *)*puVar12 == (local_64 & 0xffff)) goto LAB_007ec308;
            uVar10 = uVar10 - 1;
            puVar12 = puVar12 + 1;
          } while (uVar10 != 0);
        }
        uVar3 = *param_3;
        if (uVar3 != DAT_04cb6038) {
          bVar4 = *(byte *)(DAT_05370a68 + 0x48a8);
          if ((long)(char)bVar4 != 0xffffffffffffffff) {
            lVar11 = DAT_05370a68 + 0x18 + ((long)(char)bVar4 & 0xffffffffU) * 0x908;
            if (7 < bVar4) {
              lVar11 = DAT_05370a68 + 0x18;
            }
            puVar2 = &DAT_04cb6038;
            if (*(char *)(lVar11 + 0x8f0) != '\0') {
              puVar2 = (ushort *)(lVar11 + 0x900);
            }
            if (*puVar2 == uVar3) goto LAB_007ec308;
          }
          if (((*(ushort *)(DAT_05370a68 + 0x4858) == uVar3) ||
              (*(ushort *)(DAT_05370a68 + 0x485a) == uVar3)) ||
             ((*(ushort *)(DAT_05370a68 + 0x485c) == uVar3 ||
              ((*(ushort *)(DAT_05370a68 + 0x485e) == uVar3 ||
               (*(ushort *)(DAT_05370a68 + 0x4860) == uVar3)))))) goto LAB_007ec308;
        }
        lVar11 = *DAT_0537d558;
        bVar4 = *(byte *)(lVar11 + 0x473);
        uStack_5c = param_5;
        if ((long)(char)bVar4 != 0xffffffffffffffff) {
          pbVar1 = (byte *)(lVar11 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x80;
          if (7 < bVar4) {
            pbVar1 = (byte *)(lVar11 + 0x48);
          }
          if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar11 + 0x472) != bVar4)) {
            FUN_007ef010(&local_64,PTR_DAT_04bb3170);
            local_58 = 0;
            local_56 = 0;
            local_60 = 0xffffffff;
            local_54 = 0;
            local_64 = CONCAT22(local_64._2_2_,*param_3);
            local_55 = *param_4;
            if (7 < local_55) {
              local_55 = 0xff;
            }
            FUN_01de717c(&DAT_04cb5480,&local_64,0x14);
            if (*(char *)(param_2 + 0xd8) == '\0') {
              *(undefined1 *)(param_2 + 0xd8) = 1;
            }
            iVar9 = *(int *)(param_2 + 0xd0);
            *(undefined4 *)(param_2 + 0xd4) = 0;
            goto LAB_007ec320;
          }
        }
        uVar7 = FUN_007ec69c(param_2,param_4);
        if (uVar7 != 0xffffffff) {
          iVar8 = FUN_007ec704(param_2,param_3,param_5);
          if (iVar8 == 0) {
            FUN_007ef010(&local_64,PTR_DAT_04bb3170);
            local_55 = *param_4;
            local_56 = 0;
            local_58 = 0;
            local_54 = 1;
            local_64 = CONCAT22(local_64._2_2_,*param_3);
            if (7 < local_55) {
              local_55 = 0xff;
            }
            local_60 = uVar7;
            FUN_01de7124(&DAT_04cb5480,&local_64,0x14);
            bVar4 = *param_4;
            bVar6 = 7 < bVar4;
            if (bVar6) {
              bVar4 = 0xff;
            }
            lVar11 = param_2 + (ulong)(uint)(int)(char)bVar4 * 0x18;
            if (bVar6) {
              lVar11 = param_2;
            }
            *(ushort *)(lVar11 + (ulong)uVar7 * 8) = *param_3;
            bVar4 = *param_4;
            bVar6 = 7 < bVar4;
            if (bVar6) {
              bVar4 = 0xff;
            }
            lVar11 = param_2 + (ulong)(uint)(int)(char)bVar4 * 0x18;
            if (bVar6) {
              lVar11 = param_2;
            }
            *(uint *)(lVar11 + (ulong)uVar7 * 8 + 4) = param_5;
            iVar9 = *(int *)(param_2 + 0xd0);
            if (iVar9 == *(int *)(param_2 + 0xc0)) {
              *(undefined1 *)(param_2 + 200) = 0;
              *(undefined4 *)(param_2 + 0xc4) = 1;
            }
          }
          else {
            iVar9 = *(int *)(param_2 + 0xd0);
            if (iVar9 == *(int *)(param_2 + 0xc0)) {
              *(undefined1 *)(param_2 + 200) = 0;
              *(undefined2 *)(param_2 + 0xc4) = 0;
              *(ushort *)(param_2 + 0xc6) = CONCAT11(iVar8 == 2,iVar8 == 1);
            }
          }
          goto LAB_007ec320;
        }
      }
    }
LAB_007ec308:
    iVar9 = *(int *)(param_2 + 0xd0);
    if (iVar9 != *(int *)(param_2 + 0xc0)) goto LAB_007ec320;
  }
  *(undefined1 *)(param_2 + 200) = 0;
  *(undefined4 *)(param_2 + 0xc4) = 0;
LAB_007ec320:
  *param_1 = iVar9;
  return;
}

