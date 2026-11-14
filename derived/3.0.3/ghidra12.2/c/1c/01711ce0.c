
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_01711ce0(long param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  float *pfVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar6 = *(uint *)(param_1 + 0x14c0);
  uVar1 = uVar6 & 0xffff;
  if (0xfffeffff < uVar6 || uVar1 == 0xffff) {
    lVar5 = *(long *)(param_1 + 0x1150);
    if (lVar5 == 0) goto LAB_01711e94;
    local_80 = PTR_DAT_04bb2020 + 0x10;
    uStack_78 = PTR_DAT_04bb2f90 + 0x31;
    if (*(int *)(lVar5 + 0x30) == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      lVar8 = *(long *)(lVar5 + 0x38);
      lVar7 = 0;
      lVar5 = (long)*(int *)(lVar5 + 0x30) << 3;
      uVar6 = 0xffffffff;
      do {
        plVar3 = (long *)**(undefined8 **)(lVar8 + lVar7 * 8);
        iVar2 = (**(code **)(*plVar3 + 0x38))(plVar3,&local_80);
        if (iVar2 != -1) {
          uVar6 = (uint)lVar7 & 0xffff | iVar2 << 0x10;
          break;
        }
        lVar7 = lVar7 + 1;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
    uVar1 = uVar6 & 0xffff;
  }
  uStack_78 = (undefined *)_UNK_04102208;
  local_80 = (undefined *)_DAT_04102200;
  local_68 = _UNK_04102888;
  local_70 = _DAT_04102880;
  uStack_58 = _UNK_041023d8;
  local_60 = _DAT_041023d0;
  if ((uVar1 != 0xffff) && (uVar6 < 0xffff0000)) {
    plVar3 = (long *)**(undefined8 **)
                       (*(long *)(*(long *)(param_1 + 0x1150) + 0x38) +
                       (-(ulong)(uVar1 >> 0xf) & 0xfffffffffff80000 | (ulong)uVar1 << 3));
    (**(code **)(*plVar3 + 0x70))(plVar3,&local_80,(int)uVar6 >> 0x10);
    lVar5 = FUN_0251e98c(1);
    pfVar4 = (float *)(**(code **)(*(long *)(lVar5 + 0xcf0) + 0xf0))(lVar5 + 0xcf0);
    fVar9 = *pfVar4;
    pfVar4 = (float *)(**(code **)(*(long *)(lVar5 + 0xd20) + 0xf0))(lVar5 + 0xd20);
    fVar10 = *pfVar4;
    pfVar4 = (float *)(**(code **)(*(long *)(lVar5 + 0xd50) + 0xf0))(lVar5 + 0xd50);
    return uStack_78._4_4_ +
           fVar10 * local_80._4_4_ + fVar9 * (float)local_80 + *pfVar4 * (float)uStack_78;
  }
LAB_01711e94:
  return *(float *)(*(long *)(*(long *)(param_1 + 0x48) + 0x68) + 0x278);
}

