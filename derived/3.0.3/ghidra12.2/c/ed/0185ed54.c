
void FUN_0185ed54(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined4 *puVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  
  lVar4 = *(long *)(param_1 + 0x3d0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x2d8) + 0x28))(lVar4 + 0x2d8);
    plVar1 = DAT_0537d558;
    uVar2 = FUN_01d3e29c(*DAT_0537d558 + 8);
    if (((uVar2 & 1) != 0) && (uVar2 = FUN_01d692e8(plVar1[2]), (uVar2 & 1) == 0)) {
      return;
    }
  }
  puVar3 = (undefined4 *)(**(code **)(*(long *)(*(long *)(param_1 + 0x500) + 0xf8) + 0xf0))();
  uVar7 = *puVar3;
  puVar3 = (undefined4 *)
           (**(code **)(*(long *)(*(long *)(param_1 + 0x500) + 0x128) + 0xf0))
                     (*(long *)(param_1 + 0x500) + 0x128);
  uVar2 = FUN_0187afc0(uVar7,*puVar3,param_1,param_1 + 800,1);
  if (((uVar2 & 1) == 0) && (*(char *)(param_1 + 0x4d8) != '\0')) {
    *(undefined4 *)(param_1 + 0x4d4) = 0x20000000;
    lVar4 = *(long *)(param_1 + 0x3d0);
    if ((lVar4 != 0) &&
       ((**(code **)(*(long *)(lVar4 + 0x2d8) + 0x28))(lVar4 + 0x2d8),
       1 < *(byte *)(*DAT_0537d558 + 0x476))) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x3d0) + 0x2d8) + 0x28))
                (*(long *)(param_1 + 0x3d0) + 0x2d8);
      plVar1 = DAT_0537d558;
      uVar2 = FUN_01d3e29c(*DAT_0537d558 + 8);
      if (((uVar2 & 1) == 0) || (uVar2 = FUN_01d692e8(plVar1[2]), (uVar2 & 1) != 0)) {
        FUN_01815e0c(param_1,*(undefined4 *)(param_1 + 0x280),param_1 + 0x328);
        uVar7 = FUN_006f0400(*(float *)(param_1 + 0x328) -
                             *(float *)(*(long *)(param_1 + 0x300) + 0x278),
                             *(float *)(param_1 + 0x330) -
                             *(float *)(*(long *)(param_1 + 0x300) + 0x280));
        *(undefined4 *)(param_1 + 0x4c8) = uVar7;
        fVar5 = *(float *)(*(long *)(param_1 + 0x300) + 0x278) - *(float *)(param_1 + 0x328);
        fVar6 = *(float *)(*(long *)(param_1 + 0x300) + 0x280) - *(float *)(param_1 + 0x330);
        *(float *)(param_1 + 0x4d0) = SQRT(fVar6 * fVar6 + fVar5 * fVar5);
      }
    }
  }
  return;
}

