
void FUN_0036c0a0(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ushort uVar6;
  undefined1 uVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined4 local_68;
  undefined4 local_64;
  
  puVar5 = PTR_DAT_04bd0810;
  puVar4 = PTR_DAT_04bd0800;
  lVar16 = *(long *)(param_3 + 0x68);
  if (*(short *)(lVar16 + 0x30) != 0) {
    lVar17 = 0;
    lVar18 = 0;
    uVar19 = 0;
    plVar1 = (long *)(param_2 + 0x38);
    local_68 = 0x43564c46;
    do {
      lVar15 = *(long *)(lVar16 + 0x20);
      plVar8 = (long *)(**(code **)puVar4)(0x38,4,*(undefined8 *)puVar5);
      if (plVar8 != (long *)0x0) {
        *plVar8 = (long)plVar8;
        plVar8[1] = (long)plVar8;
        *(undefined4 *)(plVar8 + 4) = 0;
        plVar8[2] = 0;
        *(undefined8 *)((long)plVar8 + 0x16) = 0;
        plVar8[5] = 0;
        plVar8[6] = 0;
      }
      lVar15 = lVar15 + lVar17;
      uVar9 = *(undefined4 *)(lVar15 + 0x20);
      uVar7 = local_64._3_1_;
      uVar6 = local_64._2_2_;
      switch(uVar9) {
      case 0:
        local_64 = (uint)local_64._1_3_ << 8;
        uVar9 = 0;
        uVar10 = 0;
        uVar11 = 0;
        uVar12 = 0x41504c46;
        break;
      case 1:
        local_64 = CONCAT13(uVar7,0x20000);
        local_64 = CONCAT22(local_64._2_2_,0x100);
        uVar9 = 1;
        goto LAB_0036c274;
      case 2:
        local_64 = CONCAT22(uVar6,0x706);
        uVar9 = 2;
        goto LAB_0036c2a0;
      case 3:
        local_64 = CONCAT13(uVar7,0x50000);
        local_64 = CONCAT22(local_64._2_2_,0x403);
        uVar9 = 3;
LAB_0036c274:
        uVar10 = 0;
        uVar11 = 0;
        uVar12 = 0x41504c46;
        uVar13 = 3;
        goto LAB_0036c414;
      case 4:
        local_64 = CONCAT22(uVar6,0x908);
        uVar9 = 4;
LAB_0036c2a0:
        uVar10 = 0;
        uVar11 = 0;
        uVar12 = 0x41504c46;
        uVar13 = 2;
        goto LAB_0036c414;
      case 5:
        local_64 = (uint)local_64._1_3_ << 8;
        uVar9 = 5;
        uVar10 = 0;
        uVar11 = 0;
        uVar12 = 0x49564c46;
        break;
      case 6:
        local_64 = CONCAT31(local_64._1_3_,0x10);
        uVar9 = 6;
        uVar10 = 0;
        uVar11 = 0;
        uVar12 = local_68;
        break;
      default:
        goto switchD_0036c154_caseD_7;
      case 8:
        local_64 = CONCAT22(uVar6,0x403);
        uVar12 = 0x544d4c46;
        uVar9 = 8;
        goto LAB_0036c390;
      case 9:
        local_64 = CONCAT31(local_64._1_3_,2);
        uVar9 = 9;
        uVar10 = 0;
        uVar11 = 0;
        uVar12 = 0x544d4c46;
        break;
      case 10:
        local_64 = (uint)uVar6 << 0x10;
        uVar12 = 0x544d4c46;
        uVar9 = 10;
        goto LAB_0036c390;
      case 0xb:
        local_64 = CONCAT22(uVar6,0x400);
        uVar12 = 0x53504c46;
        uVar9 = 0xb;
LAB_0036c390:
        uVar10 = 0;
        uVar11 = 0;
        uVar13 = 2;
        goto LAB_0036c414;
      case 0xc:
        local_64 = 0x7060504;
        uVar9 = 0xc;
        goto LAB_0036c3d4;
      case 0xd:
        local_64 = 0x3020100;
        uVar9 = 0xd;
LAB_0036c3d4:
        uVar10 = 0;
        uVar11 = 1;
        uVar12 = 0x434d4c46;
        uVar13 = 4;
        goto LAB_0036c414;
      case 0xe:
      case 0x11:
      case 0x14:
        local_64 = CONCAT22(uVar6,0x403);
        iVar2 = *(int *)(lVar15 + 0x20);
        goto joined_r0x0036c1d0;
      case 0xf:
      case 0x12:
      case 0x15:
        uVar10 = 0xffffffff;
        local_64 = CONCAT31(local_64._1_3_,2);
        uVar3 = *(int *)(lVar15 + 0x20) - 0xe;
        if (uVar3 < 9) {
          uVar10 = *(undefined4 *)(&DAT_04134d94 + (long)(int)uVar3 * 4);
        }
        uVar11 = 1;
        uVar12 = 0x53544c46;
        break;
      case 0x10:
      case 0x13:
      case 0x16:
        local_64 = CONCAT22(uVar6,0x100);
        iVar2 = *(int *)(lVar15 + 0x20);
joined_r0x0036c1d0:
        uVar10 = 0xffffffff;
        if (iVar2 - 0xeU < 9) {
          uVar10 = *(undefined4 *)(&DAT_04134d94 + (long)(int)(iVar2 - 0xeU) * 4);
        }
        uVar11 = 1;
        uVar12 = 0x53544c46;
        uVar13 = 2;
        goto LAB_0036c414;
      case 0x19:
        local_64 = (uint)local_64._1_3_ << 8;
        uVar9 = 0x19;
        uVar10 = 0;
        uVar11 = 3;
        uVar12 = 0x414d5346;
        break;
      case 0x1a:
        lVar14 = *(long *)(lVar16 + 0x28);
        local_64 = 0;
        FUN_0036cfe0(plVar8,lVar15,0x1a,0,4,0x4d535046,4,&local_64);
        plVar8[6] = lVar14 + lVar18;
        goto LAB_0036c418;
      case 0x1b:
        local_64 = (uint)local_64._1_3_ << 8;
        uVar9 = 0x1b;
        uVar10 = 0;
        uVar11 = 0;
        uVar12 = 0x41504c46;
        uVar13 = 0;
        goto LAB_0036c414;
      }
      uVar13 = 1;
LAB_0036c414:
      FUN_0036cfe0(plVar8,lVar15,uVar9,uVar10,uVar11,uVar12,uVar13,&local_64);
LAB_0036c418:
      lVar15 = *plVar8;
      uVar19 = uVar19 + 1;
      lVar18 = lVar18 + 0x80;
      lVar17 = lVar17 + 0x38;
      *plVar8 = *plVar1;
      *(long **)(lVar15 + 8) = plVar1;
      *(long **)(*plVar1 + 8) = plVar8;
      *plVar1 = lVar15;
    } while (uVar19 < *(ushort *)(lVar16 + 0x30));
  }
switchD_0036c154_caseD_7:
  return;
}

