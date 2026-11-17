
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02edd2d4(long *param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined *local_40;
  undefined4 local_38;
  
  if (*(byte *)(param_1 + 1) < 8) {
    if (*(char *)((long)param_1 + 0x1c) == '\0') {
      if (*(long **)(*param_1 + 0x1b0) != (long *)0x0) {
        uVar3 = (**(code **)(**(long **)(*param_1 + 0x1b0) + 0x60))();
        plVar5 = *(long **)(*param_1 + 0x1b0);
        if ((uVar3 & 1) == 0) {
          if ((plVar5 != (long *)0x0) && (uVar3 = (**(code **)(*plVar5 + 0x50))(), (uVar3 & 1) != 0)
             ) {
            *(undefined1 *)((long)param_1 + 0x1c) = 0;
            *(undefined1 *)(param_1 + 1) = 0xff;
            uVar1 = DAT_0558600c;
            *(undefined4 *)((long)param_1 + 0xc) = _DAT_05586008;
            *(undefined4 *)(param_1 + 2) = uVar1;
            lVar4 = *param_1;
            plVar5 = *(long **)(lVar4 + 0x220);
            lVar6 = *plVar5;
            if ((lVar6 != 0) && (plVar7 = *(long **)(lVar6 + 0x48), plVar7[1] != 0)) {
              local_40 = PTR_DAT_04bc0878 + 0x10;
              local_38 = 9;
              (**(code **)(*plVar7 + 0x18))(plVar7,&local_40);
              (**(code **)(plVar7[3] + 0x5e0))(plVar7[1],PTR_DAT_04bb2da0,0);
              FUN_03d7dd80(lVar6);
              lVar4 = *param_1;
              plVar5 = *(long **)(lVar4 + 0x220);
            }
            lVar4 = plVar5[1 < *(uint *)(lVar4 + 0x218)];
            if ((lVar4 != 0) && (plVar5 = *(long **)(lVar4 + 0x48), plVar5[1] != 0)) {
              local_40 = PTR_DAT_04bc0878 + 0x10;
              local_38 = 9;
              (**(code **)(*plVar5 + 0x18))(plVar5,&local_40);
              (**(code **)(plVar5[3] + 0x5e0))(plVar5[1],PTR_DAT_04bb2da0,0);
              FUN_03d7dd80(lVar4);
            }
          }
        }
        else if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x30))(plVar5,0);
        }
      }
    }
    else {
      if (*(char *)((long)param_1 + 0x1d) != '\0') {
        plVar5 = (long *)**(undefined8 **)(*param_1 + 0x210);
        if (plVar5 != (long *)0x0) {
          local_40 = PTR_DAT_04bc0cb8 + 0x10;
          local_38 = 0xb;
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
          pfVar2 = (float *)(**(code **)(plVar5[3] + 0xd0))(plVar5[1]);
          plVar5 = (long *)**(undefined8 **)(*param_1 + 0x230);
          if (plVar5 != (long *)0x0) {
            fVar8 = *(float *)((long)param_1 + 0x14);
            fVar9 = *(float *)(param_1 + 3);
            fVar10 = *pfVar2;
            local_40 = PTR_DAT_04bc4f00 + 0x10;
            local_38 = 0x14;
            (**(code **)(*plVar5 + 0x18))(plVar5,&local_40);
            (**(code **)(plVar5[3] + 0x158))(fVar9 * (fVar10 / fVar8),plVar5[1]);
          }
        }
        *(undefined1 *)((long)param_1 + 0x1d) = 0;
      }
      if (((*(char *)((long)param_1 + 0x1e) == '\0') && (*(char *)((long)param_1 + 0x1f) != '\0'))
         && (plVar5 = *(long **)(*(long *)(*param_1 + 0x230) +
                                (ulong)(4 < *(uint *)(*param_1 + 0x228)) * 0x20),
            plVar5 != (long *)0x0)) {
        local_40 = PTR_DAT_04bc4e68 + 0x10;
        local_38 = 1;
        (**(code **)(*plVar5 + 0x18))(plVar5,&local_40);
        (**(code **)(plVar5[3] + 400))(0x3f800000,plVar5[1]);
      }
    }
  }
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  return;
}

