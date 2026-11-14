
/* WARNING: Removing unreachable block (ram,0x0187e3e0) */
/* WARNING: Removing unreachable block (ram,0x0187e448) */

undefined8 FUN_0187e394(float param_1,float param_2,long param_3,float *param_4,uint *param_5)

{
  float *pfVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  undefined8 local_68;
  float local_60;
  int iStack_5c;
  long *local_58;
  byte local_28 [4];
  undefined4 local_24;
  
  puVar2 = PTR_DAT_04bb2200;
  if ((*(long *)PTR_DAT_04bb2200 != 0) &&
     (lVar5 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar5 != 0)) {
    local_68 = (undefined *)((ulong)local_68 & 0xffffffff00000000);
    plVar6 = *(long **)(lVar5 + 0x118);
    if (((plVar6 != (long *)0x0) &&
        (((char)plVar6[7] != '\0' &&
         (uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6), (uVar4 & 1) != 0)))) &&
       ((*(long *)puVar2 == 0 ||
        (((lVar5 = *(long *)(*(long *)puVar2 + 0x50), lVar5 == 0 ||
          (lVar5 = *(long *)(lVar5 + 0x118), lVar5 == 0)) || (*(char *)(lVar5 + 0xe0b) != '\0'))))))
    {
      local_68 = PTR_DAT_04bb2010 + 0x10;
      local_60 = (float)((int)((float)(int)*param_4 / 5.0) - (uint)(*param_4 < 0.0));
      iStack_5c = (int)((float)(int)param_4[2] / 5.0) - (uint)(param_4[2] < 0.0);
      local_58 = plVar6;
      FUN_015af3fc(&local_58,local_28,&local_68,0);
      iVar3 = FUN_015afc6c(&local_58,local_28,0);
      puVar2 = PTR_DAT_04bb2d00;
      if (0 < iVar3) {
        return 0;
      }
      local_24 = 0;
      pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*param_5 >> 0x14) & 0xff0));
      fVar7 = (float)(*param_5 & 0xffffff) * 5.9604645e-08;
      local_28[0] = *(byte *)(param_3 + 0x494) ^ 1;
      local_60 = (pfVar1[2] + fVar7 * pfVar1[3]) * param_1 + param_4[2];
      local_68 = (undefined *)
                 CONCAT44(param_4[1] + 0.0,(*pfVar1 + fVar7 * pfVar1[1]) * param_1 + *param_4);
      uVar4 = FUN_01a1e110(&local_68,param_4,PTR_FUN_04bbe990,local_28);
      if ((uVar4 & 3) != 0) {
        if (param_2 == 0.0) {
          return 1;
        }
        local_24 = 0;
        pfVar1 = (float *)(puVar2 + (ulong)(*param_5 + 0x40000000 >> 0x18) * 0x10);
        fVar7 = (float)(*param_5 & 0xffffff) * 5.9604645e-08;
        local_28[0] = *(byte *)(param_3 + 0x494) ^ 1;
        local_60 = (pfVar1[2] + fVar7 * pfVar1[3]) * param_2 + param_4[2];
        local_68 = (undefined *)
                   CONCAT44(param_4[1] + 0.0,(*pfVar1 + fVar7 * pfVar1[1]) * param_2 + *param_4);
        uVar4 = FUN_01a1e110(&local_68,param_4,PTR_FUN_04bbe990,local_28);
        if ((uVar4 & 3) != 0) {
          local_24 = 0;
          pfVar1 = (float *)(puVar2 + (ulong)(*param_5 + 0xc0000000 >> 0x18) * 0x10);
          fVar7 = (float)(*param_5 & 0xffffff) * 5.9604645e-08;
          local_28[0] = *(byte *)(param_3 + 0x494) ^ 1;
          local_60 = (pfVar1[2] + fVar7 * pfVar1[3]) * param_2 + param_4[2];
          local_68 = (undefined *)
                     CONCAT44(param_4[1] + 0.0,(*pfVar1 + fVar7 * pfVar1[1]) * param_2 + *param_4);
          uVar4 = FUN_01a1e110(&local_68,param_4,PTR_FUN_04bbe990,local_28);
          if ((uVar4 & 3) != 0) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

