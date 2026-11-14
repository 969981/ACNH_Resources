
/* WARNING: Removing unreachable block (ram,0x016e3824) */
/* WARNING: Removing unreachable block (ram,0x016e3910) */

float FUN_016e37dc(undefined8 param_1)

{
  float *pfVar1;
  char *pcVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  int local_38;
  int local_34;
  
  if ((DAT_05231900 != 0) && (*(long *)(DAT_05231900 + 0x50) != 0)) {
    local_34 = 0;
    lVar3 = *(long *)(*(long *)(DAT_05231900 + 0x50) + 0x118);
    if (lVar3 != 0) {
      local_38 = 0;
      fVar4 = (float)FUN_0093b024(*(long *)PTR_DAT_04bb27c8 + 0x28,param_1,&local_38);
      if (local_38 == 5) {
        lVar3 = *(long *)(lVar3 + 0x280);
        if (lVar3 == 0) {
          return 0.0;
        }
        lVar3 = *(long *)(lVar3 + 8);
        if (lVar3 == 0) {
          return 0.0;
        }
        pfVar1 = (float *)(**(code **)(*(long *)(lVar3 + 0x488) + 0xf0))(0,lVar3 + 0x488);
        return *pfVar1;
      }
      local_34 = local_38;
      lVar3 = FUN_009807cc(*(long *)PTR_DAT_04bb46c8 + 8,local_38);
      if ((((lVar3 != 0) &&
           (pcVar2 = (char *)FUN_009823a0(lVar3,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10),
           pcVar2 != (char *)0x0)) && (*pcVar2 != '\0')) || (local_38 == 0xc)) {
        fVar5 = 0.0;
        if ((DAT_05231900 != 0) && (*(long *)(DAT_05231900 + 0x50) != 0)) {
          local_34 = 0;
          lVar3 = *(long *)(*(long *)(DAT_05231900 + 0x50) + 0x118);
          if (lVar3 != 0) {
            fVar5 = (float)FUN_015bc77c(lVar3,param_1,0,0);
          }
        }
        return fVar4 + fVar5;
      }
    }
  }
  return -100.0;
}

