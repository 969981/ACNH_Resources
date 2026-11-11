
long FUN_00397160(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  long local_90 [4];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  
  local_70 = param_6;
  uStack_6c = param_7;
  local_90[3] = param_3;
  plVar11 = (long *)((long)local_90 - ((ulong)*(uint *)(param_5 + 0x10) * 8 + 0xf & 0xffffffff0));
  if (*(uint *)(param_5 + 0x10) == 0) {
    lVar10 = 0;
  }
  else {
    local_90[0] = param_4;
    uVar13 = 0;
    local_68 = (undefined4 *)0x0;
    lVar10 = 0;
    uVar12 = 0;
    local_90[2] = param_1 + 0x100;
    do {
      puVar14 = *(undefined4 **)(*(long *)(param_5 + 0x18) + uVar13 * 8);
      switch(*puVar14) {
      case 0:
        plVar8 = *(long **)(param_1 + 0x110);
        *(long **)(param_1 + 0x110) = plVar8 + 0x14;
        local_90[1] = lVar10;
        if (plVar8 != (long *)0x0) {
          FUN_00392a84(plVar8,puVar14,local_68,local_90[2]);
        }
        piVar1 = (int *)nn::util::BinaryFileHeader::GetFirstBlock();
        if (piVar1 != (int *)0x0) {
          iVar9 = 0;
          do {
            if (*piVar1 == 0x50434756) {
              if (iVar9 == puVar14[0x26]) {
                lVar10 = FUN_00397160(param_1,param_2,local_90[3],plVar8,piVar1,local_70,uStack_6c);
                lVar10 = lVar10 + local_90[1];
                if (plVar8 == (long *)0x0) goto switchD_00397258_default;
                goto LAB_003971e4;
              }
              iVar9 = iVar9 + 1;
            }
            piVar1 = (int *)nn::util::BinaryBlockHeader::GetNextBlock();
          } while (piVar1 != (int *)0x0);
        }
        lVar10 = local_90[1];
        if (plVar8 != (long *)0x0) {
LAB_003971e4:
          (**(code **)(*plVar8 + 0x10))(plVar8,param_2,local_90[3],local_70,uStack_6c);
          lVar2 = (**(code **)(*plVar8 + 0x30))(plVar8,param_2);
          plVar11[(int)uVar12] = (long)plVar8;
          uVar12 = uVar12 + 1;
          lVar10 = lVar2 + lVar10;
        }
        break;
      case 1:
      case 2:
      case 3:
      case 5:
        plVar8 = *(long **)(param_1 + 0x110);
        *(long **)(param_1 + 0x110) = plVar8 + 0x14;
        if (plVar8 != (long *)0x0) {
          FUN_00392a84(plVar8,puVar14,local_68,local_90[2]);
          goto LAB_003971e4;
        }
        break;
      case 4:
        plVar8 = *(long **)(param_1 + 0x110);
        *(long **)(param_1 + 0x110) = plVar8 + 0x20;
        if (plVar8 != (long *)0x0) {
          FUN_003936d8(plVar8,puVar14,local_68,local_90[2]);
          goto LAB_003971e4;
        }
        break;
      case 6:
        local_68 = puVar14;
      }
switchD_00397258_default:
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(uint *)(param_5 + 0x10));
    if (0 < (int)uVar12) {
      uVar13 = 0;
      plVar8 = (long *)(local_90[0] + 0x90);
      do {
        lVar2 = plVar11[uVar13];
        iVar9 = *(int *)(*(long *)(lVar2 + 0x28) + 0x8c);
        if (iVar9 < 0) {
          plVar3 = (long *)(lVar2 + 8);
          lVar6 = *plVar3;
          *plVar3 = *plVar8;
          *(long **)(lVar6 + 8) = plVar8;
          *(long **)(*plVar8 + 8) = plVar3;
          *plVar8 = lVar6;
          lVar6 = local_90[0];
LAB_00397388:
          *(long *)(lVar2 + 0x38) = lVar6;
        }
        else {
          uVar4 = (ulong)*(uint *)(param_5 + 0x10);
          plVar3 = plVar11;
          if (*(uint *)(param_5 + 0x10) != 0) {
            do {
              lVar6 = *plVar3;
              if (*(int *)(*(long *)(lVar6 + 0x28) + 0x78) == iVar9) {
                plVar3 = (long *)(lVar2 + 8);
                lVar5 = *plVar3;
                plVar7 = (long *)(lVar6 + 0x90);
                *plVar3 = *plVar7;
                *(long **)(lVar5 + 8) = plVar7;
                *(long **)(*plVar7 + 8) = plVar3;
                *plVar7 = lVar5;
                goto LAB_00397388;
              }
              plVar3 = plVar3 + 1;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar12);
    }
  }
  return lVar10;
}

